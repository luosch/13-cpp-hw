#include "Card.h"
#include <string>
using std::string;
// avoid cheating lsc
// avoid cheating lsc
// avoid cheating lsc
// avoid cheating lsc
const char* Card::faceNames[13] =
{"Ace", "Two", "Three", "Four", "Five", "Six",
"Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
const char* Card::suitNames[4] =
{"Hearts", "Diamonds", "Clubs", "Spades"};
Card::Card(int cardFace, int cardSuit) {
    face = cardFace;
    suit = cardSuit;
}    
std::string Card::toString() const {
    string a = faceNames[face];
    string b = suitNames[suit];
    return a+" of "+b;
}
int Card::getFace() const {
    return face;
}
int Card::getSuit() const {
    return suit;
}
