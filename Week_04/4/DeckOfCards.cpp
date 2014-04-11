#include <vector>
#include <stdio.h>
#include "DeckOfCards.h"
using std::vector;
// avoid cheating lsc
// avoid cheating lsc
// avoid cheating lsc
// avoid cheating lsc
DeckOfCards::DeckOfCards() {
    currentCard = 0;    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            Card x(j, i);
            deck.push_back(x);
        }    
    }
}
Card DeckOfCards::dealCard() {
    return deck[currentCard++];  
}    
bool DeckOfCards::moreCards() const {
    return currentCard < 52;
}
