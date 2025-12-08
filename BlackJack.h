/*#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "PlayingCard.h"
#include "DeckOfCards.h"

class BlackJack {
private:
    std::vector<PlayingCard> hand;
    double wager;
public: 
    BlackJack();
    std::string str() const;
    std::vector<PlayingCard> getHand();
    void setWager(double wgr);
    double getWager();
    void draw(PlayingCard); //takes parameter and pushes it to the hand
    int stand(); //stand function: Ends round, returns total (ace)
};*/