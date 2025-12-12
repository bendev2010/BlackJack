#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <ctime>
#include "PlayingCard.h"
#include "DeckOfCards.h"
#include "Player.h"

class Game {
private:
    DeckOfCards deck;
public: 
    Game();
    void gameStart(Player& obj1, Player& obj2);
    void cpuTurn(Player& cpu1);
    void userTurn(Player& user1); 
    void gameEnd(Player& user1, Player& cpu1);
};