//
// Created by Anthony Gavriel on 23/01/2022.
//

#ifndef BLACKJACKGAME_DECK_H
#define BLACKJACKGAME_DECK_H

#include "Card.h"
#include <iostream>
#include <vector>

class Deck {
public:
    Deck();
    void shuffle(std::vector<Card> &stack);
private:
    std::vector<Card> deck;
};


#endif //BLACKJACKGAME_DECK_H
