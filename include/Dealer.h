#include <iostream>
#include <vector>
#include "Card.h"
#include "Player.h"
#include "Deck.h"

#ifndef BLACKJACKGAME_DEALER_H
#define BLACKJACKGAME_DEALER_H


class Dealer {
public:
    Dealer();
    Deck shuffleCards(Deck deck);
    void hit(Deck deck, Player player);
    void hit(Deck deck);
    void stick();
    void viewCards();
    int getValue();
private:
    std::vector<Card> hand;
    int value;
    bool playing;
};


#endif //BLACKJACKGAME_DEALER_H
