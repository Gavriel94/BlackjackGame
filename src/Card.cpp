#include "../include/Card.h"

Card::Card() = default;

Card::Card(Value value, Suit suit) {
    this->suit = suit;
    this->value = value;
}

std::string Card::getSuit() const {
    int c = suit;
    std::string strSuit;
    switch(c) {
        case 0:
            strSuit = "Diamonds";
            break;
        case 1:
            strSuit = "Spades";
            break;
        case 2:
            strSuit = "Clubs";
            break;
        case 3:
            strSuit = "Hearts";
            break;
        default:
            ;
    }
    return strSuit;
}

std::string Card::getValue() const {
    int c = value;
    std::string strValue;
    switch(c) {
        case 2:
            strValue = "2";
            break;
        case 3:
            strValue = "3";
            break;
        case 4:
            strValue = "4";
            break;
        case 5:
            strValue = "5";
            break;
        case 6:
            strValue = "6";
            break;
        case 7:
            strValue = "7";
            break;
        case 8:
            strValue = "8";
            break;
        case 9:
            strValue = "9";
            break;
        case 10:
            strValue = "10";
            break;
        case 11:
            strValue = "Jack";
            break;
        case 12:
            strValue = "Queen";
            break;
        case 13:
            strValue = "King";
            break;
        case 14:
            strValue = "Ace";
            break;
        default:
            ;
    }
    return strValue;
}

std::ostream& operator<<(std::ostream& output, const Card& card) {
    std::string s = card.getSuit();
    std::string v = card.getValue();
    output << v << " of " << s << std::endl;
    return output;
}