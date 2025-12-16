#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "PlayingCard.h"
#include "DeckOfCards.h"

class Player {
private:
    std::vector<PlayingCard> hand;
    int cpuTotal;
    int userTotal;
    bool acesInHand;
    int aceValue;
    int royalValue;
public: 
    Player();
    std::string str();
    std::vector<PlayingCard> getHand();
    bool getAcesInHand();
    int getAceValue();
    void draw(PlayingCard);
    void setAceValue(int av);
    int autoTotal();
    void cpuAces();
};