#include <iostream>
#include "../include/Card.h"
#include "../include/Deck.h"
#include "../include/Player.h"
#include "../include/Dealer.h"

int main() {
    //instantiating objects to start game
    Deck cards;
    Dealer dealer;
    Player b("Bob");
    Player j("Jane");
    std::vector<Player> players;

    //basic gameplay
    dealer.shuffleCards(cards);
    dealer.startGame(cards, players);
    for(auto  player : players) {
        while(player.getPlaying()) {
            bool c;
            c = dealer.hitOrStick(player);
            if(c) {
                dealer.hit(cards, player);
            }
            else {
                player.stick();
            }
        }
    }
    while(dealer.inGame()) {
        dealer.hit(cards);
        if(dealer.getValue() > 21) {
            dealer.stick();
        } else if(dealer.getValue() == 21) {
            std::cout << "Dealer wins!";
            dealer.stick();
        }
        else if(dealer.getValue() == 17) {
            dealer.stick();
        }
    }
    for(auto player : players) {
        if(player.getValue() > dealer.getValue() && !player.getBust()) {
            std::cout << player.getName() << " wins!";
        }
    }

    return 0;
}
