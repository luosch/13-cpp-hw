#include <iostream>
#include "BookIndex.h"
using std::cout;
using std::cin;
using std::endl;
int main() {
    BookIndex howToPro("C++ How to Program", "Deitel & Deitel", 2003);
    cout << howToPro.getTitle() << endl;
    cout << howToPro.getAuthorName() << endl;
    cout << howToPro.getCopyright() << endl;
 
    BookIndex *howToPtr = &howToPro;
    howToPtr -> setCopyright(2005);
    cout << howToPtr -> getCopyright() << endl;
 
    BookIndex &howToRef = howToPro;
    howToRef.setCopyright(2007);
    cout << howToRef.getCopyright() << endl;
    while(1);
    return 0;
}
