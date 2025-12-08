#include "DeckOfCards.h"

DeckOfCards::DeckOfCards()
{
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 1; j < 14; j++) 
        {
            cards.push_back(PlayingCard(j, i));
        }
    }
}

std::string DeckOfCards::str() const 
{
    std::string strOut = "To Deal\n";
    for (int i = 0; i < cards.size(); i++)
    {
        strOut += (cards.at(i).stringify() + "\n");
    }
    strOut += "\nDealt\n";
    for (int i = 0; i < dealt.size(); i++)
    {
        strOut += (dealt.at(i).stringify() + "\n");
    }
    return strOut;
}

std::vector<PlayingCard> DeckOfCards::getCards() const {
    return cards;
}

std::vector<PlayingCard> DeckOfCards::getDealt() const {
    return dealt;
}

PlayingCard DeckOfCards::deal() {
    PlayingCard toDeal = cards.at(cards.size() - 1);
    cards.pop_back();
    dealt.push_back(toDeal);
    return toDeal;
}

void DeckOfCards::shuffle() {
    srand(time(0));
    int idx = 0;
    while(cards.size() > 0)
    {
        idx = rand() % cards.size();
        dealt.push_back(cards.at(idx));
        cards.erase(cards.begin() + idx);
    }
    while (dealt.size() > 0)
    {
        idx = rand() % dealt.size();
        cards.push_back(dealt.at(idx));
        dealt.erase(dealt.begin() + idx);
    } 
}