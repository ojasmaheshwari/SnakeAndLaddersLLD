//
// Created by epicman on 3/19/26.
//

#include "SimpleRandomBoardCreation.h"

#include <cstdlib>

std::vector<BoardEntity> SimpleRandomBoardCreation::create(int n) {
    std::vector<BoardEntity> boardEntities;

    auto randomGenerator = [](int start, int end) -> int {
       return rand() % (end - start) + start;
    };

    for (int i = 0; i < n; i++) {
        // snake
        int snakeStartPos = randomGenerator(n + 1, n * n);
        int snakeEndPos = randomGenerator(2, snakeStartPos);

        boardEntities.emplace_back(
            snakeStartPos, snakeEndPos
        );

        // ladder
        int ladderStartPos = randomGenerator(2, n * n - n);
        int ladderEndPos = randomGenerator(ladderStartPos + 1, n * n - 1);

        boardEntities.emplace_back(
            ladderStartPos, ladderEndPos
        );
    }

    return boardEntities;
}
