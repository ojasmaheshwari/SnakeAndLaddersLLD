//
// Created by epicman on 3/19/26.
//

#ifndef SNAKEANDLADDERS_BOARDCREATIONSTRATEGY_H
#define SNAKEANDLADDERS_BOARDCREATIONSTRATEGY_H
#include <vector>
#include <BoardEntity.h>


class BoardCreationStrategy {
public:
    virtual std::vector<BoardEntity> create(int n) = 0;
};


#endif //SNAKEANDLADDERS_BOARDCREATIONSTRATEGY_H