// Debugging: CardTest.cpp

#include <iostream>
#include "Card.h"
using namespace std;

int main()
{
   Card *c1 = new Card();  
   Card *c2 = new Card( 3, 4 );
   Card *c3 = new Card( 1, 14 );

   Card *p1 = c2;
   c1->print();
   c2->print();
   c3->print();
   p1->print();
   //cout << endl;

   c1->setSuit( p1->getSuit() );
   c3->setValue(12);
   p1->setValue(5);
   
   c1->print();
   c2->print();
   c3->print();
   (*p1).print();
   //cout << endl;
   delete c1;
   delete c2;
   delete c3;
   while(1);
   return 0;
} // end main
