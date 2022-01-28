#include "../include/Dealer.h"
#include "../include/Deck.h"
#include "../include/Card.h"

Dealer::Dealer() {
    playing = true;
    value = 0;
}

Deck Dealer::shuffleCards(Deck deck) {
    deck.shuffle();
    return deck;
}

void Dealer::hit(Deck deck, Player player) {
    Card c = deck.removeCard();
    player.hand.push_back(c);
}

void Dealer::hit(Deck deck) {
    Card c = deck.removeCard(deck);
    hand.push_back(c);
}

void Dealer::stick() {
    playing = false;
}

void Dealer::viewCards() {
    for(auto i : hand) {
        std::cout << i;
    }
}

int Dealer::getValue() {
    for(auto i : hand) {
        if(i.getValue() == "Jack" || i.getValue() == "Queen" ||
        i.getValue() == "King") {
            value += 10;
        } else if(i.getValue() == "Ace") {
            if(value + 11 <= 21) {
                value += 11;
            }
            else {
                value += 1;
            }
        }
        else {
            value += std::stoi(i.getValue());
        }
    }
    return value;
}