//
// Created by Anthony Gavriel on 23/01/2022.
//

#ifndef BLACKJACKGAME_DECK_H
#define BLACKJACKGAME_DECK_H

#include "Card.h"
#include <iostream>
#include <vector>
#include <random>

class Deck {
public:
    Deck();
    void instantiateDeck();
    void shuffle();
    Card removeCard();
    //used for testing
    void printDeck();
    void getSize();
private:
    std::vector<Card> deck;
};


#endif //BLACKJACKGAME_DECK_H
