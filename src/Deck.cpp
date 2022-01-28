#include "../include/Deck.h"
#include "../include/Card.h"
#include "../include/Dealer.h"

Deck::Deck() {
    instantiateDeck();
}

void Deck::instantiateDeck() {
    for(int i = 0; i < Card::enumSuitEnd; i++) {
        for (int j = 2; j < Card::enumValueEnd; j++) {
            auto s = (Card::Suit) i;
            auto v = (Card::Value) j;
            Card c(v, s);
            deck.push_back(c);
        }
    }
}

/*
 * Refine this function by making an error and using a try-catch
 */
Card Deck::removeCard() {
    if(deck.empty()) {
        std::cout << "All cards have been used!\nGetting a fresh deck.\n\n";
        instantiateDeck();
        shuffle();
        Card c = deck.at(deck.size() - 1);
        return c;
    }
    Card c = deck.at(deck.size() - 1);
    deck.pop_back();
    return c;
}

void Deck::shuffle() {
    auto rd = std::random_device {};
    auto rng = std::default_random_engine {
            rd()
    };
    std::shuffle(std::begin(deck), std::end(deck), rng);
}

//for testing
void Deck::printDeck() {
    for(auto i : deck) {
        std::cout << i;
    }
}

void Deck::getSize() {
    std::cout << deck.size();
}

