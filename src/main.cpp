#include <iostream>
#include <cstdlib>
#include <ctime>
#include "GameFactory.h"

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    int n, numPlayers;
    string difficulty;

    cout << "Enter board size n (board will be n x n): ";
    cin >> n;
    cout << "Enter number of players: ";
    cin >> numPlayers;
    cout << "Enter difficulty (easy/hard): ";
    cin >> difficulty;

    GameFactory gameFactory;
    Game *game = gameFactory.createGame(n, numPlayers, difficulty);
    game->start();
    game->play();

    delete game;
    return 0;
}
