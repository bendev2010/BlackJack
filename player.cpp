#include "Player.h"

Player::Player() {
    hand;
    cpuTotal;
    userTotal;
    acesInHand = false;
    aceValue = 1;
    royalValue = 10;
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
    return aceValue;
}
void Player::draw(PlayingCard newCard) {
    hand.push_back(newCard);
}
void Player::setAceValue(int av) {
    aceValue = av;
}

int Player::autoTotal() {
    int total = 0;
    for (int i = 0; i < hand.size(); i++) {
        int temp = hand[i].getRank();
        if (hand[i].getRank() == 1) {
            temp = aceValue;
        }
        if (hand[1].getRank() >= 11) {
            temp = royalValue;
        }
        total += temp;  
    }
    cpuTotal = total;
    return total;
}

int Player::sum() {
    int total;
    for (int i = 0; i < hand.size(); i++) {
        int temp = 0;
        if (hand[i].getRank() <= 10 && hand[i].getRank() != 10) {
            temp = hand[1].getRank();
        } else if (hand[1].getRank() >= 11) {
            temp = royalValue;
        } else if (hand[i].getRank() == 1) {
            std::cout << "Do you want your ace to count as 1 or 11" << std::endl;
            std::cin >> temp;
        }
        total += temp;  
    }
    userTotal = total;
    return total;
}

void Player::cpuAces() {
    for (int i = 0; i < hand.size(); i++) {
            if (hand[i].getRank() == 1) {
                acesInHand = true;
            }
    }
}