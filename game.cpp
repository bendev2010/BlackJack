/* Blackjack Game
Made by Benedict Newton
(with help from PlayingCards and game example)
B8 Computer Programing 3 Mr Test
12/10/2025 XII/X/MMXXV */

#include "BlackJack.h"
#include "PlayingCard.h"
#include "DeckOfCards.h"

int main() {
    Player user = Player();
    Player cpu = Player();
    std::cout << "Welcome to Blackjack\n" << std::endl;

    /*DeckOfCards theDeck = DeckOfCards();
    theDeck.shuffle();
    for (int i = 0; i < 2; i++) {
        user.draw(theDeck.deal());
        cpu.draw(theDeck.deal());
    }*/

    //Game loop - User can draw, stand and bust
    std::cout << user.str() << "\n" << std::endl;
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


    //Computer should evaluate and sum it's cards stand()
    //If there is an ace compare the value between if it was a 1 or 11
    //Under certain conditions and strategies draw
    //Then wait for user 
    //after user stands then see whether cpu busts and see who wins 


    //Next Step: create a similar process for the CPU (Could use black jack strategies)
    //Then compare their score, allocate the wager and declare the winner

    std::cin.get();
    return 0;
} 