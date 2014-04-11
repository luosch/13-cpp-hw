// Debugging: Card.cpp

#include <iostream>
using namespace std;
#include "Card.h"

// default constructor
Card::Card()
{
   suit = 4; 
   value = 1;

} // end class Card constructor

// constructor
Card::Card( int s, int v ) 
{
   suit = s; value = v;

} // end class Card constructor

// destructor
Card::~Card() 
{
   cout << "The destructor has been invoked\n";

} // end class Card destructor

// set suit
void Card::setSuit( int s ) 
{
   suit = s;

} // end function setSuit

// set value
void Card::setValue( int v ) 
{
   value = v;

} // end function setValue
// return suit
int Card::getSuit() const
{
   return suit;

} // end function getSuit

// return value
int Card::getValue() const 
{
   return value;

} // end function getValue

// function validCard definition
bool Card::validCard() const
{
   return getValue() >= 1 && getValue() <= 13 
   && getSuit() >= 1 && getSuit() <= 4;
}

// function print definition
void Card::print() const
{
   // is card valid
   if ( !validCard() ) {
      cout << "This card is not valid\n";
      return;

   } // end if

   cout << "This is the: ";

   // determine face of card
   switch (getValue()) {
      case 1:
         cout << "Ace ";
         break;

      case 11:
         cout << "Jack ";
         break;

      case 12:
         cout << "Queen ";
         break;

      case 13:
         cout << "King ";
         break;

      default:
         cout << value << " ";

   } // end switch

   // determine suit
   switch ( suit ) {
      case 1:
         cout << "of clubs\n";
         break;

      case 2:
         cout << "of diamonds\n";
         break;

      case 3:
         cout << "of hearts\n";
         break;

      case 4:
         cout << "of spades\n";
         break;

      default:
         cout << "\ninvalid suit\n";

   } // end switch

} // end function print


// end function validCard
