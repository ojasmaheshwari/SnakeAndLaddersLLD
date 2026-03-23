//
// Created by epicman on 3/19/26.
//

#ifndef SNAKEANDLADDERS_EQUALDISTRIBUTIONSTRATEGY_H
#define SNAKEANDLADDERS_EQUALDISTRIBUTIONSTRATEGY_H
#include <BoardCreationStrategy.h>


class EqualDistributionStrategy : public BoardCreationStrategy {
public:
    EqualDistributionStrategy();
    std::vector<BoardEntity> create(int n) override;
};


#endif //SNAKEANDLADDERS_EQUALDISTRIBUTIONSTRATEGY_H