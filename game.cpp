/* Deck of Playing Cards
Contributions by Benny, Calvin and Mr Test
Benedict Newton
B8 Computer Programing 3 Mr Test
11/21/2025*

#include "BlackJack.h"
#include "PlayingCard.h"
#include "DeckOfCards.h"

int main() {
    std::cout << "Welcome to Blackjack" << std::endl;

    BlackJack user = BlackJack();
    DeckOfCards theDeck = DeckOfCards();
    theDeck.shuffle();
    
    for (int i = 0; i < 2; i++) {
        user.draw(theDeck.deal());
    }

    std::cout << user.str() << std::endl;

    //give the option to draw or stand
    //After each draw check for a bust
    //Then run stand. Must either calculate whether
    //1 or 11 is better or let user decide.
    //Then see who won. (Meaning the computer must go through
    // a similar process to user. Maybe uses actual strategies)

    std::cin.get();
    return 0;
} */