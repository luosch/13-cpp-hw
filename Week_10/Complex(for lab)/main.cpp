// Lab 2: main.cpp
// Complex test program.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
 
#include "Complex.h"
 
int main() {
    Complex complex;  // create Complex object
 
     // ask user to enter complex number
        cout << "Input a complex number in the form A + Bi:\n";
        cin >> complex;  // store complex number
     
        if (!cin.fail())  // display complex number entered by user if valid
            cout << "Complex number entered was:\n" << complex << endl;
        else
            cout << "Invalid Data Entered\n";
    return 0;
}  // end main