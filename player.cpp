#include "Player.h"

Player::Player() {
    hand;
    cardTotal;
    autoCardTotal;
    acesInHand = false;
}

std::string Player::str() {
    std::string cards = "Your Hand\n";

    for (int i = 0; i < hand.size(); i++) {
        cards += (hand.at(i).stringify() + "\n");
    }
    return cards;
}

void BlackJack::setCardTotal() {
    wager = wgr;
}

std::vector<PlayingCard> BlackJack::getHand() {
    return hand;
}

double BlackJack::getWager() {
    return wager;
}

void BlackJack::draw(PlayingCard newCard) {
    hand.push_back(newCard);
}

int Player::sum() {
    int total;
    for (int i = 0; i < hand.size(); i++) {
        int temp = hand[i].getRank();
        if (hand[i].getRank() = 1) {
            std::cout << "Do you want your ace to count as 1 or 11" << std::endl;
            std::cin >> temp;
        }
        total += temp;  
    }

    autoCardTotal = total;
    return total;
}

bool Player::cpuAces() {
    for (int i = 0; i < hand.size(); i++) {
            if (hand[i].getRank() = 1) {
                acesInHand = true;
            }
    }
}
//give the option to draw or stand
    //After each draw check for a bust
    //Then run stand. Must either calculate whether
    //1 or 11 is better or let user decide.