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
    while (cpuPlaying) {
        int total = cpu.autoTotal();
        cpu.cpuAces();
        if (cpu.getAcesInHand() == false)  {
            if (total <= 9 ) {
                cpu.draw(deck.deal());
            } else if (total <= 12) {
                cpu.draw(deck.deal());
                cpuPlaying = false;
            } else if (total <= 15) {
                //Random in future
                cpu.draw(deck.deal());
                cpuPlaying = false;
            } else if (total > 15) {
                cpuPlaying = false;
            }
        } else if (cpu.getAcesInHand() == 2) {
            if (total <= 9) {
                cpu.draw(deck.deal());
            } else if (total == 10) {
                cpu.setAceValue(11);
                cpuPlaying = false;
            } else if (total == 11) {
                cpu.setAceValue(11);
                cpuPlaying = false;
            } else if (total <= 15) {
                cpu.draw(deck.deal());
                cpuPlaying = false;
            } else if (total > 15 ) {
                cpuPlaying = false;
            }
        }
    }

    if (cpu.autoTotal() <= 11 && cpu.getAceValue() == 1) {
        cpu.setAceValue(11);
    }
    if (cpu.autoTotal() > 21) {
        std::cout << "CPU busted. User wins if they do not bust" << std::endl;
    }
}

void Game::userTurn(Player& user) {
    std::cout << user.str() << std::endl;
    std::string input1;
    bool userPlay = true;
    while (userPlay)
    {
        std::cout << "Would you like to draw or stand? Type 'D' or 'S' ";
        std::cin >> input1;
        while (input1 != "D" && input1 != "S")
        {
            std::cout << "Invalid, please enter 'D' or 'S' to draw or stand ";
            std::cin >> input1;
        }
        
        if (input1 == "D") {
            user.draw(deck.deal());
            int sum = user.autoTotal();
            std::cout << user.str() << "Your total is " << sum << std::endl;
            if (sum > 21) {
                userPlay = false;
            }
        } else if (input1 == "S") {
            user.cpuAces();
            int aV = 0;
            if (user.getAcesInHand()) {
                std::cout << "Should the ace count as 11 or 1? ";
                std::cin >> aV;
                while (aV != 11 && aV != 1) {
                    std::cout << "Invalid, please enter '11' or '1'" << std::endl;
                    std::cin >> aV;
                }
            }
            user.setAceValue(aV);
            std::cout << "Your total is " << user.autoTotal() << std::endl;
            userPlay = false;
        }
    }
}

void Game::gameEnd(Player& user, Player& cpu) {
    if (cpu.autoTotal() > 21) {
        std::cout << "Congratulations, you won! They busted with a total of " << cpu.autoTotal() << std::endl;
    } else if (user.autoTotal() > 21) { 
        std::cout << "You lost (via bust). Good luck next time" << std::endl;
    }
    else if (cpu.autoTotal() < user.autoTotal()) {
        std::cout << "Congratulations, you won! They got: " << cpu.autoTotal() << std::endl;
    } else if (cpu.autoTotal() > user.autoTotal()) {
        std::cout << "You lost. The CPU got: " << cpu.autoTotal() << std::endl;
    } else if (cpu.autoTotal() == user.autoTotal()) {
        std::cout << "It was a draw. You both got " << cpu.autoTotal() << std::endl;
    }

    std::cout << "Thank you for playing."<< std::endl;
}