//
// Created by epicman on 3/19/26.
//

#ifndef SNAKEANDLADDERS_GAME_H
#define SNAKEANDLADDERS_GAME_H
#include <queue>
#include <vector>
#include <Player.h>
#include <Board.h>
#include <GameStatus.h>
#include <Dice.h>
#include <MakeMoveStrategy.h>
#include <BoardCreationStrategy.h>


class Game {
private:
    std::queue<Player*> players;
    std::vector<Player*> finishedPlayers;
    Board* board;
    Dice dice;
    GameStatus gameStatus;
    MakeMoveStrategy *makeMoveStrategy;
    BoardCreationStrategy *boardCreationStrategy;
    int n;
    int numPlayers;

    void makeTurn();

public:
    Game(int n, int numPlayers, MakeMoveStrategy* makeMoveStrategy, BoardCreationStrategy* boardCreationStrategy);
    ~Game();

    void start();
    void play();
};


#endif //SNAKEANDLADDERS_GAME_H