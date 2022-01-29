#include "../include/Player.h"
#include "../include/Dealer.h"

#include <utility>

Player::Player(std::string name) {
    this->name = std::move(name);
    playing = true;
    value = 0;
    bust = false;
}

//hit is true
//stick is false
//knocks player out the game
//wrap in loop in main
bool Player::hit() {
    return playing;
}

bool Player::stick() {
    playing = false;
    return playing;
}

int Player::getValue() {
    for(auto i : hand) {
        if(i.getValue() == "Jack" || i.getValue() == "Queen" ||
           i.getValue() == "King") {
            value += 10;
        } else if(i.getValue() == "Ace") {
            value += ace();
        }
        else {
            value += std::stoi(i.getValue());
        }
    }
    //keep an eye on this
    if(value > 21) {
        std::cout << "Player bust!";
        bust = true;
        playing = false;
    }
    return value;
}

int Player::ace() {
    std::cout << "Would you like the ace to be 1 or 11?" << std::endl;
    int choice = 0;
    std::cin >> choice;
    switch(choice) {
        case 1:
            choice = 1;
            break;
        case 2:
            choice = 11;
            break;
        default:
            std::cout << "Error, please press 1 or 11\n";
            std::cin >> choice;
    }
    for(int i = 0; i < 50; i++) {
        std::cout << "\n";
    }
    return choice;
}

void Player::viewCards() {
    for(auto i : hand) {
        std::cout << i;
    }
    std::cout << "Total value: " << getValue();
}

bool Player::getPlaying() {
    return playing;
}

std::string Player::getName() {
    return std::string();
}

bool Player::getBust() {
    return bust;
}

