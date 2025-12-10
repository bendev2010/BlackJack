#pragma once
#include <string>
#include <vector>
#include<ctime>

class PlayingCard
{
private:
    int rank;
    int suit;
    const static std::string BRAND;
public:
    PlayingCard();
    PlayingCard(int, int);
    int getRank() const;
    int getSuit() const;
    std::string getColor() const;
    bool getFace() const;
    std::string stringify() const;
    static std::string getBrand();
    //overloading relational operators based on ranks of cards
    bool operator<(const PlayingCard&) const;
    bool operator>(const PlayingCard&) const;
    bool operator<=(const PlayingCard&) const;
    bool operator>=(const PlayingCard&) const;
    bool operator==(const PlayingCard&) const;
    bool operator!=(const PlayingCard&) const;
};