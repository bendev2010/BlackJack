I remade this


   /*DeckOfCards theDeck = DeckOfCards();
        theDeck.shuffle();
        for (int i = 0; i < 2; i++) {
            user.draw(theDeck.deal());
            cpu.draw(theDeck.deal());
        }*/

        /*Game loop - User can draw, stand and bust
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
        }*/


        //Computer should evaluate and sum it's cards stand()
        //If there is an ace compare the value between if it was a 1 or 11
        //Under certain conditions and strategies draw
        //Then wait for user 
        //after user stands then see whether cpu busts and see who wins 


        //Next Step: create a similar process for the CPU (Could use black jack strategies)
        //Then compare their score, allocate the wager and declare the winner













































# Blackjack

There is a dealer and players. Everyone is against the dealers.
Give all players two cards to start and let them ask for more and 
indicate when they *stand* meaning they are happy with it or if they
ask for too many - totaling above 21 - they lose. Player wins if dealer busts and they don't.
Player wins if they are closer to 21 than dealer. If dealer is closer then they win. If a tie then tie. 

Of course the game is to get closest to 21

Betting - There can be a wager and the win gets 1.5 what they bet. We'll have the same bet for both and the loser can keep 1.5. 


## BlackJack
---
-deck: vector
-wager: double
-
---
+setDeck
+getDeck
+getWager
+setWager()
+earnWager()
+stand()  //says when player stands and also asks if there are aces if they should count as 1 or 11.

+




#### Logic

game will start, wager is set, cards are dealt
then player can draw cards, stand, and the program will check after each draw if they have busted (losing the game)
will say if player lost won or tied
computer will be able to do the same and will strategically draw and stand. Computer is technically dealer
When there is no bust then whoever is closer to 21 will win and then the message will say how much was won.