//
// Created by epicman on 3/19/26.
//

#ifndef SNAKEANDLADDERS_SIMPLERANDOMBOARDCREATION_H
#define SNAKEANDLADDERS_SIMPLERANDOMBOARDCREATION_H
#include "BoardCreationStrategy.h"


class SimpleRandomBoardCreation : public BoardCreationStrategy {
public:
    SimpleRandomBoardCreation() = default;
    std::vector<BoardEntity> create(int n) override;
};


#endif //SNAKEANDLADDERS_SIMPLERANDOMBOARDCREATION_H