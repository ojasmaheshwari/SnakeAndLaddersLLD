//
// Created by epicman on 3/19/26.
//

#ifndef SNAKEANDLADDERS_MAKEMOVESTRATEGY_H
#define SNAKEANDLADDERS_MAKEMOVESTRATEGY_H

#include <MoveResult.h>
#include <Board.h>
#include <Player.h>
#include <Dice.h>

class MakeMoveStrategy {
private:
    Board* board;

public:
    virtual ~MakeMoveStrategy() = default;

    virtual MoveResult makeMove(Player *player, Dice *dice, Board *board) = 0;
};


#endif //SNAKEANDLADDERS_MAKEMOVESTRATEGY_H