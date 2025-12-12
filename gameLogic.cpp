#include "gameLogic.h"

Game::Game() {
    DeckOfCards deck = DeckOfCards();
}

void Game::gameStart(Player& p1, Player& p2) {
    deck.shuffle();
    for (int i = 0; i < 2; i++) {
        p1.draw(deck.deal());
        p2.draw(deck.deal());
    }
}

void Game::cpuTurn(Player& cpu) {
    bool cpuPlaying = true;
    int total = cpu.autoTotal();
    srand(time(0));
    int idx;
    while (cpuPlaying)
    {
        cpu.cpuAces();
        if (cpu.getAcesInHand() == false)  {
            if (total <= 9 ) {
                cpu.draw(deck.deal());
            } else if (total <= 12) {
                cpu.draw(deck.deal());
                cpuPlaying = false;
            } else if (total <= 15) {
                idx = rand() % 2;
                if (idx == 0 || 2) {
                    cpuPlaying = false;
                } else {
                    cpu.draw(deck.deal());
                }
            } else if (total > 15) {
                cpuPlaying = false;
            }
        } else if (cpu.getAcesInHand() == true) {
            if (total <= 9) {
                cpu.draw(deck.deal());
            } else if (total == 10 || total == 11) {
                cpu.setAceValue(11);
                cpuPlaying = false;
            }  else if (total <= 15) {
                cpu.draw(deck.deal());
                cpuPlaying = false;
            } else if (total > 15 ) {
                cpuPlaying = false;
            }
        }
    }

    if (total <= 11 && cpu.getAceValue() == 1) {
        cpu.setAceValue(11);
    }
    cpu.autoTotal();

    if (cpu.autoTotal() > 21) {
        std::cout << "Cpu busted. User wins if they do not bust";
        std::cin.get();
    }
}

void Game::userTurn(Player& user) {
    std::cout << user.str() << std::endl;
    std::string input1;
    bool userPlay = true;
    while (userPlay)
    {
        std::cout << "Would you like to draw or stand? Type 'D' or 'S'" << std::endl;
        std::cin >> input1;
        while (input1 != "D" && input1 != "S")
        {
            std::cout << "Invalid, please enter a capital 'D' or 'S' to draw or stand" << std::endl;
            std::cin >> input1;
        }
        
        if (input1 == "D") {
            user.draw(deck.deal());
            int sum = user.autoTotal();
            std::cout << user.str() << "Your total is " << sum << std::endl;
            if (sum > 21) {
                std::cout << "You lost (via bust). Good luck next time" << std::endl;
                userPlay = false;
            }
        } else if (input1 == "S") {
            user.cpuAces();
            if (user.getAcesInHand()) {
                int aV = 0;
                std::cout << "Should the ace count as 11 or 1?";
                std::cin >> aV;
                while (aV != 11 && aV != 1){
                    std::cout << "Invalid, please enter '11' or '1'" << std::endl;
                    std::cin >> aV;
                }
                user.setAceValue(aV);
            }
            int totale = user.autoTotal();
            std::cout << "Your total is " << totale << std::endl;
            userPlay = false;
        } else {
            std::cout << "Sorry, we will fix this in the next update" << std::endl;
        }  
    }
}

void Game::gameEnd(Player& user, Player& cpu) {
    if (cpu.autoTotal() < user.sum()) {
        std::cout << "Congratulations, you won!" << std::endl;
    } else if (cpu.autoTotal() < user.sum()) {
        std::cout << "You lost. The CPU got: " << cpu.autoTotal() << std::endl;
    } else if (cpu.autoTotal() == user.sum()) {
        std::cout << "It was a draw. You both got " << cpu.autoTotal() << std::endl;
    }
}

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