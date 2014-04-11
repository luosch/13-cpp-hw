// Debugging: Card.h

#ifndef CARD_H
#define CARD_H

// class card definition
class Card {

public:
   Card();
   Card( int, int );
   ~Card();

   void setSuit( int );
   int getSuit() const;

   void setValue( int );
   int getValue() const;
   bool validCard() const;
   void print() const;
private:
   int suit;
   int value;
}; // end class Card

#endif // CARD_H
