#include "PlayingCard.h"

const std::string PlayingCard::BRAND = "Bicycle";

PlayingCard::PlayingCard(){
    rank = 14;
    suit = 3;
}

PlayingCard::PlayingCard(int r, int s){
    rank = r;
    suit = s;
}

int PlayingCard::getRank() const {return rank;}
int PlayingCard::getSuit() const {return suit;}

std::string PlayingCard::getColor() const {
    if (suit == 1 || suit == 3){
        return "Black";
    } else {
        return "Red";
    }
}

bool PlayingCard::getFace() const {return rank > 10;}

std::string PlayingCard::getBrand() {
    return BRAND;
}

std::string PlayingCard::stringify() const {
    std::string ranks[] = {"Nought", "Ace", "Two", "Three", "Four",
                            "Five", "Six", "Seven", "Eight", "Nine",
                            "Ten", "Jack", "Queen", "King"};

    std::string suits[] = {"Clubs ♣", "Diamonds ♦", "Hearts ♥",
                           "Spades ♠"};
    
    return ranks[rank] + " of " + suits[suit];
}

//rho is right hand operand
bool PlayingCard::operator<(const PlayingCard &rho) const {
    return rank < rho.getRank();
}
bool PlayingCard::operator<=(const PlayingCard &rho) const {
    return rank <= rho.getRank();
}
bool PlayingCard::operator>(const PlayingCard &rho) const {
    return rank > rho.getRank();
}
bool PlayingCard::operator>=(const PlayingCard &rho) const {
    return rank >= rho.getRank();
}
bool PlayingCard::operator==(const PlayingCard &rho) const {
    return rank == rho.getRank();
}
bool PlayingCard::operator!=(const PlayingCard &rho) const {
    return rank != rho.getRank();
}