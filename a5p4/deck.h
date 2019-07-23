/*
    CH08-320143
    a5p4
    Wossen K Hailemariam
    w.hailemariam@jacobs-university.de
*/


#ifndef DECK_H
#define DECK_H

#include <ctime>
#include <algorithm>
#include "genericplayer.h"

class Deck : public Hand
{
public:
    Deck();
    
    virtual ~Deck();

    //create a standard deck of 52 cards
    void Populate();

    //shuffle cards
    void Shuffle();

    //deal one card to a hand
    void Deal(Hand& aHand);

    //give additional cards to a generic player 
    void AdditionalCards(GenericPlayer& aGenericPlayer);
};

#endif
