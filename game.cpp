/* Deck of Playing Cards
Contributions by Benny, Calvin and Mr Test
Benedict Newton
B8 Computer Programing 3 Mr Test
11/21/2025*/

#include "BlackJack.h"
#include "PlayingCard.h"
#include "DeckOfCards.h"

int main() {
    std::cout << "Welcome to Blackjack\n" << std::endl;

    BlackJack user = BlackJack();
    DeckOfCards theDeck = DeckOfCards();
    theDeck.shuffle();
    
    for (int i = 0; i < 2; i++) {
        user.draw(theDeck.deal());
    }

    std::cout << user.str() << "\n" << std::endl;

    std::string input1;

    //Here is probably where the game loop starts 
    std::cout << "Would you like to draw or stand? Type 'D' or 'S'" << std::endl;
    std::cin >> input1;
    while (input1 != "D" && input1 != "S")
    {
        std::cout << "Invalid, please enter a capital 'D' or 'S' to draw or stand" << std::endl;
        std::cin >> input1;
    }
    //At some point here
    
    if (input1 == "D") {
        user.draw(theDeck.deal());
        std::cout << user.str() << "\n" << std::endl;
        int sum;
        for (int i = 0; i < user.getHand().size(); i++) {
            sum += user.getHand()[i].getRank();
        }
        
        if (sum > 21) {
        //bust 
    }

    //give the option to draw or stand
    //After each draw check for a bust
    //Then run stand. Must either calculate whether
    //1 or 11 is better or let user decide.
    //Then see who won. (Meaning the computer must go through
    // a similar process to user. Maybe uses actual strategies)

    std::cin.get();
    return 0;
} 