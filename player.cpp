#include "Player.h"

Player::Player() {
    hand;
    cpuTotal;
    userTotal;
    acesInHand = false;
    aceValue = 1;
}

std::string Player::str() {
    std::string cards = "Your Hand\n";
    for (int i = 0; i < hand.size(); i++) {
        cards += (hand.at(i).stringify() + "\n");
    }
    return cards;
}

std::vector<PlayingCard> Player::getHand() {
    return hand;
}
bool Player::getAcesInHand() {
    return acesInHand;
}
int Player::getAceValue() {
    return aceValue
}
void Player::draw(PlayingCard newCard) {
    hand.push_back(newCard);
}
void Player::setAceValue(av) {
    aceValue = av;
}

int Player::autoTotal() {
    int total;
    for (int i = 0; i < hand.size(); i++) {
        int temp = hand[i].getRank();
        if (hand[i].getRank() = 1) {
            temp = aceValue;
        }
        total += temp;  
    }
    cpuTotal = temp;
    return total;
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
    userTotal = total;
    return total;
}

bool Player::cpuAces() {
    for (int i = 0; i < hand.size(); i++) {
            if (hand[i].getRank() = 1) {
                acesInHand = true;
            }
    }
}