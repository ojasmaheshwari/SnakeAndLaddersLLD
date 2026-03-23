//
// Created by epicman on 3/19/26.
//

#ifndef SNAKEANDLADDERS_EASYMAKEMOVESTRATEGY_H
#define SNAKEANDLADDERS_EASYMAKEMOVESTRATEGY_H
#include "MakeMoveStrategy.h"


class EasyMakeMoveStrategy : public MakeMoveStrategy {
public:
    EasyMakeMoveStrategy() = default;
    MoveResult makeMove(Player *player, Dice *dice, Board *board) override;
};


#endif //SNAKEANDLADDERS_EASYMAKEMOVESTRATEGY_H