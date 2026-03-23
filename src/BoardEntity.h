//
// Created by epicman on 3/19/26.
//

#ifndef SNAKEANDLADDERS_BOARDENTITY_H
#define SNAKEANDLADDERS_BOARDENTITY_H


class BoardEntity {
private:
    int start;
    int end;

public:
    BoardEntity(int start, int end);

    void setStart(const int startA) {
        start = startA;
    }

    void setEnd(const int endA) {
        end = endA;
    }

    [[nodiscard]] int getStart() const {
        return start;
    }

    [[nodiscard]] int getEnd() const {
        return end;
    }
};


#endif //SNAKEANDLADDERS_BOARDENTITY_H