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