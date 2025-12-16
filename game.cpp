/* Blackjack Game
Made by Benedict Newton
(with help from PlayingCards and game example)
B8 Computer Programing 3 Mr Test
12/10/2025 XII/X/MMXXV */

#include "Player.h"
#include "PlayingCard.h"
#include "DeckOfCards.h"
#include "gameLogic.h"


int main() {
    Player user = Player();
    Player cpu = Player();
    Game Game1 = Game();
    std::cout << "Welcome to Blackjack\n" << std::endl;

    Game1.gameStart(user, cpu); 
    Game1.cpuTurn(cpu);
    Game1.userTurn(user);
    Game1.gameEnd(user, cpu);

    std::cin.get();
    return 0;
} 