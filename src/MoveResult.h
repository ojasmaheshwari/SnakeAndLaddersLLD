//
// Created by epicman on 3/19/26.
//

#ifndef SNAKEANDLADDERS_MOVERESULT_H
#define SNAKEANDLADDERS_MOVERESULT_H


struct MoveResult {
    int newPosition;
    bool winningMove;

    MoveResult(int newPosition, bool winningMove);
};


#endif //SNAKEANDLADDERS_MOVERESULT_H