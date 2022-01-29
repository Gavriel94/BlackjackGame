#ifndef BLACKJACKGAME_PLAYER_H
#define BLACKJACKGAME_PLAYER_H


#include <vector>
#include "Card.h"

class Player {
public:
    Player(std::string name);
    bool hit();
    std::vector<Card> hand;
    bool stick();
    int getValue();
    void viewCards();
    std::string getName();
    bool getPlaying();
    bool getBust();
    //void viewTable();
private:
    int ace();
    std::string name;
    bool playing;
    int value;
    bool bust;
};


#endif //BLACKJACKGAME_PLAYER_H
