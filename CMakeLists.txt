cmake_minimum_required(VERSION 3.20)
project(BlackjackGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(BlackjackGame src/main.cpp src/Card.cpp include/Card.h src/Deck.cpp include/Deck.h)
