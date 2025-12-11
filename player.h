#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "PlayingCard.h"
#include "DeckOfCards.h"

class Player {
private:
    std::vector<PlayingCard> hand;
    int aceTotal;
    int autoCardTotal;
    bool acesInHand;
    int aceValue;
public: 
    Player();
    std::string str();
    std::vector<PlayingCard> getHand();
    bool getAcesInHand();
    void draw(PlayingCard); 
    int aceCardTotal();
    int sum();
    bool cpuAces();
};