#include <iostream>
#include "../include/Card.h"

int main() {
    Card c(Card::ACE, Card::HEARTS);
    std::cout << c;
    return 0;
}
