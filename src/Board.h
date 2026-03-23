//
// Created by epicman on 3/19/26.
//

#ifndef SNAKEANDLADDERS_BOARD_H
#define SNAKEANDLADDERS_BOARD_H
#include <map>
#include <vector>
#include <BoardEntity.h>

#include "BoardCreationStrategy.h"


class Board {
private:
    std::map<int, int> boardEntityMappings;
    int maxPosition;

public:
    Board(int n, BoardCreationStrategy *boardCreationStrategy);

    int getFinalPosition(int pos);
    int getMaxPosition() const;
};


#endif //SNAKEANDLADDERS_BOARD_H