//
// Created by epicman on 3/19/26.
//

#ifndef SNAKEANDLADDERS_PLAYER_H
#define SNAKEANDLADDERS_PLAYER_H


class Player {
private:
    int id;
    int position;
public:
    Player(int id);

    [[nodiscard]] int getId() const {
        return id;
    }

    [[nodiscard]] int getPosition() const {
        return position;
    }

    void setPosition(int positionA) {
       position = positionA;
    }
};


#endif //SNAKEANDLADDERS_PLAYER_H