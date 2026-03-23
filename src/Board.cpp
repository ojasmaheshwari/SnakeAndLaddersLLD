//
// Created by epicman on 3/19/26.
//

#include "Board.h"

Board::Board(int n, BoardCreationStrategy *boardCreationStrategy)
    : maxPosition(n * n)
{
    auto boardEntities = boardCreationStrategy->create(n);

    for (const auto &boardEntity : boardEntities) {
        boardEntityMappings[boardEntity.getStart()] = boardEntity.getEnd();
    }
}

int Board::getFinalPosition(int pos) {
    if (boardEntityMappings.contains(pos)) return boardEntityMappings[pos];
    else return pos;
}

int Board::getMaxPosition() const {
    return maxPosition;
}

