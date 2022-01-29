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
    void shuffleCards(Deck &deck);
    void startGame(Deck &deck, std::vector<Player> &players);
    void hit(Deck &deck, Player &player);
    void hit(Deck &deck);
    void stick();
    void viewCards();
    int getValue();
    bool inGame();
    bool hitOrStick(Player player);
private:
    std::vector<Card> hand;
    int value;
    bool playing;
};


#endif //BLACKJACKGAME_DEALER_H
