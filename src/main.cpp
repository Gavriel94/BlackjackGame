#include <iostream>
#include "../include/Card.h"
#include "../include/Deck.h"
#include "../include/Player.h"
#include "../include/Dealer.h"

void startGame() {

}

int main() {
    Deck deck;
    Dealer dealer;
    deck = dealer.shuffleCards(deck);
    deck.getSize();
    //issue with hit, card added to dealer hand but not being removed from deck.
    dealer.hit(deck);
    deck.getSize();
    std::cout << "\n";
    dealer.viewCards();
}
