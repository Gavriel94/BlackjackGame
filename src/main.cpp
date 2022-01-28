#include <iostream>
#include "../include/Card.h"
#include "../include/Deck.h"
#include "../include/Player.h"
#include "../include/Dealer.h"


int main() {
    Deck cards;
    Dealer dealer;
    dealer.shuffleCards(cards);

    while(dealer.inGame()) {
        dealer.hit(cards);
        dealer.viewCards();
        if(dealer.getValue() > 21) {
            std::cout << "Dealer bust!";
            dealer.stick();
        }
    }

    return 0;
}
