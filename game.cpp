/* Blackjack Game
Made by Benedict Newton
(with help from PlayingCards and game example)
B8 Computer Programing 3 Mr Test
12/10/2025 XII/X/MMXXV */

#include "BlackJack.h"
#include "PlayingCard.h"
#include "DeckOfCards.h"

int main() {
    BlackJack user = BlackJack();
    BlackJack cpu = BlackJack();
    DeckOfCards theDeck = DeckOfCards();
    theDeck.shuffle();
    for (int i = 0; i < 2; i++) {
        user.draw(theDeck.deal());
        cpu.draw(theDeck.deal());
    }

    std::cout << "Welcome to Blackjack\n" << std::endl;
    std::cout << user.str() << "\n" << std::endl;

    //CPU loop
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

    //Game loop - User can draw, stand and bust
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