#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "PlayingCard.h"
#include "DeckOfCards.h"

class Player {
private:
    std::vector<PlayingCard> hand;
    int cardTotal;
    int autoCardTotal;
    bool acesInHand;
public: 
    Player();
    std::string str();
    std::vector<PlayingCard> getHand();
    void setCardTotal();
    int getCardTotal();
    void draw(PlayingCard); //takes parameter and pushes it to the hand
    int sum();
    bool cpuAces();

     //stand function: Ends round, returns total (ace)
};