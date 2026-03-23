//
// Created by epicman on 3/19/26.
//

#include "Game.h"
#include <iostream>

Game::Game(const int n, const int numPlayers, MakeMoveStrategy *makeMoveStrategy, BoardCreationStrategy *boardCreationStrategy)
    : board(nullptr), gameStatus(GameStatus::NOT_STARTED),
      makeMoveStrategy(makeMoveStrategy), boardCreationStrategy(boardCreationStrategy),
      n(n), numPlayers(numPlayers)
{
}

Game::~Game() {
    delete board;
    delete makeMoveStrategy;
    delete boardCreationStrategy;

    while (!players.empty()) {
        delete players.front();
        players.pop();
    }
    for (auto *p : finishedPlayers) {
        delete p;
    }
}

void Game::start() {
    gameStatus = GameStatus::RUNNING;
    board = new Board(n, boardCreationStrategy);

    for (int i = 1; i <= numPlayers; i++) {
        players.push(new Player(i));
    }

    std::cout << "Game started! Board: " << n << "x" << n
              << ", Players: " << numPlayers << "\n\n";
}

void Game::play() {
    // Game continues as long as at least 2 players are still competing
    while (gameStatus != GameStatus::FINISHED) {
        makeTurn();
    }

    std::cout << "\n--- Game Over ---\n";
    for (int i = 0; i < static_cast<int>(finishedPlayers.size()); i++) {
        std::cout << "Rank " << (i + 1) << ": Player " << finishedPlayers[i]->getId() << "\n";
    }
    if (!players.empty()) {
        std::cout << "Last place: Player " << players.front()->getId() << "\n";
    }
}

void Game::makeTurn() {
    Player *player = players.front();
    players.pop();

    const MoveResult moveResult = makeMoveStrategy->makeMove(player, &dice, board);
    player->setPosition(moveResult.newPosition);

    if (moveResult.winningMove) {
        finishedPlayers.push_back(player);
        std::cout << "  --> Player " << player->getId() << " reached the end! (rank "
                  << finishedPlayers.size() << ")\n";
    } else {
        players.push(player);
    }

    // Stop when only 1 player remains (they cannot win, game is over)
    if (players.size() <= 1) {
        gameStatus = GameStatus::FINISHED;
    }
}
