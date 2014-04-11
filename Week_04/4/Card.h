// Exercise 10.10 Solution: Card.h
// Class Card represents the face and suit of a card.
#ifndef CARD_H
#define CARD_H
 
#include <string>
 
class Card {
    public:
        static const int totalFaces = 13;  // total number of faces
        static const int totalSuits = 4;  // total number of suits
 
        Card(int cardFace, int cardSuit);  // initialize face and suit
        std::string toString() const;  // returns a string representation
                                        // of a Card
 
        // get the card's face
        int getFace() const;
 
        // get the card's suit
        int getSuit() const;
    private:
        int face;
        int suit;
 
        static const char* faceNames[totalFaces];
        static const char* suitNames[totalSuits];
};  // end class Card
 
#endif
