/*Deck of Cards Header
From watching Mr. Test
Programming 3, B8, Mr. Test
11/25/25*/
#pragma once
#include<string>
#include<vector>
#include<ctime>
#include "PlayingCard.h"

class DeckOfCards
{
private:
    std::vector<PlayingCard> cards;
    std::vector<PlayingCard> dealt;
public:
    DeckOfCards();
    std::string str() const;
    std::vector<PlayingCard> getCards() const;
    std::vector<PlayingCard> getDealt() const;
    void shuffle();
    PlayingCard deal();
};