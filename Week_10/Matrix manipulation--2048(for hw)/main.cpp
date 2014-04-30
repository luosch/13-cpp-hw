#include <iostream>
#include <cstdio>
#include <time.h>
#include "Matrix.h"
// #include <curses.h>
 
using std::cout;
using std::cin;
int main() {
    // freopen("in.txt", "r", stdin);
    Matrix m(0, 13);
    cout << m;
 
    char c;
    while (cin >> c) {
        bool flag = false;
        switch (c) {  // a, d, w, s stand for left, right, up and down
            case 'a':
                flag = m.moveLeft();
            break;
            case 'd':
                flag = m.moveRight();
            break;
            case 'w':
                flag = m.moveUp();
            break;
            case 's':
                flag = m.moveDown();
            break;
            default:
            break;
        }
        if (flag)  // if the matrix changes, add a 2 to the matrix
            m.update1();
        system("Cls");
        cout << m;
    }
    return 0;
}