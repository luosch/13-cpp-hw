#include <iostream>
#include "file.h"
using std::cout;
using std::cin;
using std::endl;
int main() {
    File f1("main.cpp", 20);
    File f2("class.cpp", 20);
    File f3("class.h", 20);
    File f4("ma.cpp", 20);
    File f5("in.cpp", 20);
    Dir dir("document");
    dir.addFileSymItem(&f1);
    dir.addFileSymItem(&f2);
    dir.addFileSymItem(&f3);
    dir.addFileSymItem(&f4);
    cout << dir.getSize() << endl;
    f1.setSize(200);
    cout << dir.getSize() << endl;
    dir.delFileSymItem(&f2);
    dir.delFileSymItem(&f5);
    cout << dir.getSize() << endl;
 
    Dir Dir("user");
    Dir.addFileSymItem(&dir);
    cout << Dir.getSize() << endl;
    Dir.delFileSymItem(&f1);
    cout << Dir.getSize() << endl;
    return 0;
}
