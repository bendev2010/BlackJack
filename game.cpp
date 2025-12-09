/* Deck of Playing Cards
Contributions by Benny, Calvin and Mr Test
Benedict Newton
B8 Computer Programing 3 Mr Test
11/21/2025*/

#include "BlackJack.h"
#include "PlayingCard.h"
#include "DeckOfCards.h"

int main() {
    BlackJack user = BlackJack();
    DeckOfCards theDeck = DeckOfCards();
    theDeck.shuffle();

    std::cout << "Welcome to Blackjack\n" << std::endl;
    
    for (int i = 0; i < 2; i++) {
        user.draw(theDeck.deal());
    }

    std::cout << user.str() << "\n" << std::endl;

    //game loop - User can draw, stand, bust or sum their total including aces
    std::string input1;
    bool gameRun = true;
    while (gameRun) 
    {
        std::cout << "Would you like to draw or stand? Type 'D' or 'S'" << std::endl;
        std::cin >> input1;
        while (input1 != "D" && input1 != "S")
        {
            std::cout << "Invalid, please enter a capital 'D' or 'S' to draw or stand" << std::endl;
            std::cin >> input1;
        }
        
        if (input1 == "D") {
            user.draw(theDeck.deal());
            std::cout << user.str() << "\n" << std::endl;
            int sum;
            for (int i = 0; i < user.getHand().size(); i++) {
                sum += user.getHand()[i].getRank();
            }   
            if (sum > 21) {
                std::cout << "You lost (via bust). Good luck next time"
                gameRun = false;
            //bust using variable that ends while loop
            }
        } else if (input1 == "S") {
            int cardTotal = user.stand();
            std::cout << "Your total is " << cardTotal << std::endl;
        } else {
            std::cout << "Sorry, we will fix this in the next update" << std::endl;
        }  
    }

    //Next Step: create a similar process for the CPU (Could use black jack strategies)
    //Then compare their score, allocate the wager and declare the winner

    std::cin.get();
    return 0;
} 