#ifndef BLACKJACKGAME_CARD_H
#define BLACKJACKGAME_CARD_H

#include <iostream>

class Card {
public:
    enum Value {
        TWO = 2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK,
        QUEEN, KING, ACE, enumValueEnd
    };
    enum Suit {
        DIAMONDS, SPADES, CLUBS, HEARTS, enumSuitEnd
    };
    Card();
    Card(Value value, Suit suit);
    std::string getSuit() const;
    std::string getValue() const;
private:
    friend std::ostream& operator<<(std::ostream& output, const Card& card);
    Value value;
    Suit suit;
};

#endif //BLACKJACKGAME_CARD_H
