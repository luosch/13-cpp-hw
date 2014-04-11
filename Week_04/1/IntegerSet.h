// Lab 2: IntegerSet.h
// Header file for class IntegerSet
#ifndef INTEGER_SET_H
#define INTEGER_SET_H
#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::setw;
class IntegerSet {
     public:
          // default constructor
          IntegerSet() {
                emptySet();  // set all elements of set to 0
          }  // end IntegerSet constructor
 
          IntegerSet(int s[], int l);  // constructor that takes an initial set
          IntegerSet unionOfSets(const IntegerSet&);
          IntegerSet intersectionOfSets(const IntegerSet&);
          void emptySet();  // set all elements of set to 0
          void inputSet() {  // read values from user
              int number;
 
              do {
                  cout << "Enter an element (-1 to end): ";
                  cin >> number;
 
                  if (validEntry(number))
                      set[ number ] = 1;
                  else if (number != -1)
                      cerr << "Invalid Element\n";
              } while (number != -1);   // end do...while
 
              cout << "Entry complete\n";
          }
          void insertElement(int element);
          void deleteElement(int element);
          void printSet() const {
              int x = 1;
              bool empty = true;  // assume set is empty
              cout << '{';
              for (int u = 0; u < 101; u++) {
                if (set[ u ]) {
                     cout << setw(4) << u << (x % 10 == 0 ? "\n" : "");
                     empty = false;  // set is not empty
                    x++;
                }  // end if
              }  // end for
 
              if (empty)
                  cout << setw(4) << "---";  // display an empty set
              cout << setw(4) << "}" << '\n';
          }
          bool isEqualTo(const IntegerSet&) const;
 
     private:
          int set[ 101 ];  // range of 0 - 100
          // determines a valid entry to the set
          int validEntry(int x) const {
              return (x >= 0 && x <= 100);
          }  // end function validEntry
};  // end class IntegerSet
#endif
