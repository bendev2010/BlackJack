#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "PlayingCard.h"
#include "DeckOfCards.h"

class game {
private:
    DeckOfCards deck = DeckOfCards();
public: 
    game();
    gameStart(Player obj1, Player obj2) {
        deck.shuffle();
        for (int i = 0; i < 2; i++) {
            user.obj1(deck.deal());
            cpu.obj2(deck.deal());
        }
    }

    cpuTurn(Player cpu1) {
        bool cpuPlaying = true;
        int total = cpu1.aceCardTotal();
        cpu1.cpuAces();
        
        if (cpu1.getAcesInHand() == false)  {
            if (total <= 9 ) {
                cpu.draw(deck.deal());
            } else if (total <= 12) {
                cpu.draw(theDeck.deal());
                cpuPlaying = false;
            } else if (total <= 15) {
                //random choose between stand or draw
            } else if (total > 15) {
                cpuPlaying = false;
            }
        } /*work from here*/ else if (cpu1.getAcesInHand() == true) {
            if (total <= 9) {

            } else if (total = 10) {
                aceValue = 11;
                cpuPlaying = false;
            }
            

        }
    }
};

   /* CPU loop
    bool cpuPlaying = true;
    int cpuTotal = cpu.stand();
    bool aces = false;
    int aceValue;
    while (cpuPlaying) {
        aces = false;
        for (int i = 0; i < user.getHand().size(); i++) {
            if (cpu.getHand()[i].getRank() = 1) {
                aces = true
            }
        }
        if (!aces) {
            int total = cpu.stand();
            if (total <= 9 ) {
                cpu.draw(theDeck.deal());
            } else if (total <= 12) {
                cpu.draw(theDeck.deal());
                cpuPlaying = false;
            } else if (total <= 15) {
                //random choose between stand or draw
            } else if (total > 15) {
                cpuPlaying = false;
            }
        } else if (aces) {
            if (total <= 9) {

            } else if (total = 10) {
                aceValue = 11;
                cpuPlaying = false;
            }
            //The cpu must choose whether aces are one or eleven
            //That means on each draw the cpu should evaluate what 
            //the total should be if it was a one or an eleven
            //If say the total is within 3 or 5 of the total as an 
            //eleven then you could stop but if you are close with eleven then you
            //could draw again and if that fails fall back on the one
            //then we must change the total based on what the cpu decided that 
            //uses ace value for decision

        }

        if (aces = false) {
            cpuTotal = cpu.stand();
        } else {
            cpuTotal = 0;
            for (int i = 0; i < cpu.getHand().size(); i++) {
                int temp = cpu.getHand()[i].getRank();
                if (cpu.getHand()[i].getRank() = 1) {
                    temp += aceValue;
                }
                cpuTotal += temp;
            }
        }
    } */