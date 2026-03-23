//
// Created by epicman on 3/19/26.
//

#include "GameFactory.h"
#include "EasyMakeMoveStrategy.h"
#include "EqualDistributionStrategy.h"
#include "SimpleRandomBoardCreation.h"
#include <iostream>

Game *GameFactory::createGame(int n, int numPlayers, const std::string &difficulty) {
    MakeMoveStrategy *makeMoveStrategy = new EasyMakeMoveStrategy();
    BoardCreationStrategy *boardCreationStrategy;

    if (difficulty == "hard") {
        // Hard: fully random snake/ladder placement
        boardCreationStrategy = new SimpleRandomBoardCreation();
    } else {
        // Easy (default): equally distributed snakes and ladders
        boardCreationStrategy = new EqualDistributionStrategy();
    }

    return new Game(n, numPlayers, makeMoveStrategy, boardCreationStrategy);
}
