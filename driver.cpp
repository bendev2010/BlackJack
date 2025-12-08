/* Deck of Playing Cards
Contributions by Benny, Calvin and Mr Test
Benedict Newton
B8 Computer Programing 3 Mr Test
11/21/2025*/

#include <iostream>
#include "PlayingCard.h"
#include "DeckOfCards.h"

int main() {
    std::cout << "These are " << PlayingCard::getBrand();
    std::cout << " Brand Playing Cards" << std::endl;

    DeckOfCards theDeck = DeckOfCards();
    theDeck.shuffle();
    std::cout << theDeck.str() << std::endl;

    std::vector<PlayingCard> hand1;
    for (int i = 0; i < 5; i++) {
        hand1.push_back(theDeck.deal());
    }
    for (int i = 0; i < 5; i++) {
        std::cout << hand1.at(i).stringify() << std::endl;
    }

    std::cin.get();
    return 0;
}


