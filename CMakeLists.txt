cmake_minimum_required(VERSION 3.16)
project(SnakeAndLadders LANGUAGES CXX)


set(PROJECT_SOURCES
    src/main.cpp
        src/Game.cpp
        src/Game.h
        src/Player.cpp
        src/Player.h
        src/Board.cpp
        src/Board.h
        src/BoardEntity.cpp
        src/BoardEntity.h
        src/Snake.cpp
        src/Snake.h
        src/Ladder.cpp
        src/Ladder.h
        src/GameStatus.cpp
        src/GameStatus.h
        src/Dice.cpp
        src/Dice.h
        src/MakeMoveStrategy.cpp
        src/MakeMoveStrategy.h
        src/MoveResult.cpp
        src/MoveResult.h
        src/EasyMakeMoveStrategy.cpp
        src/EasyMakeMoveStrategy.h
        src/GameFactory.cpp
        src/GameFactory.h
        src/EqualDistributionStrategy.cpp
        src/EqualDistributionStrategy.h
        src/BoardCreationStrategy.cpp
        src/BoardCreationStrategy.h
        src/SimpleRandomBoardCreation.cpp
        src/SimpleRandomBoardCreation.h
)
set(PROJECT_INCLUDE_DIR src)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_INCLUDE_DIR})

