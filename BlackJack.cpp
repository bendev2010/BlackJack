/*#include "BlackJack.h"

BlackJack::BlackJack() {
    hand;
    wager = 0.00;
}

std::string Player::str() const
{
    string cards = "";
    for (int i = 0; i < hand.size(); i++) {
        cards = cards + hand.at(i).stringify() + "\n";
    }
    return cards;
}

void BlackJack::setWager(double wgr) {
    wager = wgr;
}

std::vector<PlayingCard> BlackJack::getHand() {
    return hand;
}

double BlackJack::getWager() {
    return wager;
}

void BlackJack::draw(PlayingCard newCard) const {
    hand.push_back(newCard);
}

int BlackJack::stand() {
    int total;
    for (int i = 0; i < hand.size(); i++) {
        int temp = hand[i].getRank()
        if (hand[i].getRank() = 1) {
            std::cout << Do you want your ace to count as 1 or 11 << std::endl;
            std::cin >> temp;
        }
        total += temp;  
    }
    return total;
}*/