#include "../include/Deck.h"

Deck::Deck() {
    instantiateDeck();
}

void Deck::instantiateDeck() {
    for(int i =0; i < Card::enumSuitEnd; i++) {
        for (int j = 2; j < Card::enumValueEnd; j++) {
            auto s = (Card::Suit) i;
            auto v = (Card::Value) j;
            Card c(v, s);
            deck.push_back(c);
        }
    }
}

void Deck::shuffle() {
    auto rd = std::random_device {};
    auto rng = std::default_random_engine {
        rd()
    };
    std::shuffle(std::begin(deck), std::end(deck), rng);
}

Card Deck::removeCard() {
    if(deck.empty()) {
        std::cout << "All cards have been used!\nShuffling a fresh deck.\n\n";
        instantiateDeck();
        shuffle();
        Card c = deck.at(deck.size() - 1);
        deck.pop_back();
        return c;
    }
    Card c = deck.at(deck.size() - 1);
    deck.pop_back();
    return c;
}

//for testing
void Deck::printDeck() {
    for(auto i : deck) {
        std::cout << i;
    }
}

