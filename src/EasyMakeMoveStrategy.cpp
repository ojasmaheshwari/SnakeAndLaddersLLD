//
// Created by epicman on 3/19/26.
//

#include "EasyMakeMoveStrategy.h"
#include <iostream>

MoveResult EasyMakeMoveStrategy::makeMove(Player *player, Dice *dice, Board *board) {
    int diceValue = dice->roll();
    int currPos = player->getPosition();
    int newPos = currPos + diceValue;
    int maxPos = board->getMaxPosition();

    std::cout << "Player " << player->getId() << " rolled " << diceValue
              << " (position: " << currPos << " -> ";

    // Do not move if piece would go beyond the last cell
    if (newPos > maxPos) {
        std::cout << currPos << ")\n";
        return MoveResult(currPos, false);
    }

    // Resolve any snake or ladder at newPos
    int finalPos = board->getFinalPosition(newPos);

    if (finalPos > newPos) {
        std::cout << finalPos << " via ladder at " << newPos << ")\n";
    } else if (finalPos < newPos) {
        std::cout << finalPos << " via snake at " << newPos << ")\n";
    } else {
        std::cout << finalPos << ")\n";
    }

    bool won = (finalPos == maxPos);
    return MoveResult(finalPos, won);
}