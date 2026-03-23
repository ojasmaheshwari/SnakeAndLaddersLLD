//
// Created by epicman on 3/19/26.
//

#ifndef SNAKEANDLADDERS_GAMEFACTORY_H
#define SNAKEANDLADDERS_GAMEFACTORY_H
#include <string>

#include "Game.h"


class GameFactory {
public:
    Game* createGame(int n, int numPlayers, const std::string &difficulty);
};


#endif //SNAKEANDLADDERS_GAMEFACTORY_H