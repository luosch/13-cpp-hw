#ifndef MATRIX_H
#define MATRIX_H
 
#include <iostream>
#include <time.h>
#include <stdlib.h>
 
#define rows 4
#define cols 4
#define L 6
 
using std::ostream;
 
class Matrix {
    friend ostream& operator<<(ostream& out, const Matrix& matirx);
    // here is an output example
    // -----------------------------
    // |    16|     8|     4|     2|
    // |     8|     8|     4|     2|
    // |      |     4|     8|     2|
    // |      |      |     2|     2|
    // -----------------------------
    public:
        Matrix(int p1, int p2);
        bool moveLeft();  // return true if the matrix changes
        bool moveRight();  // return true if the matrix changes
        bool moveUp();  // return true if the matrix changes
        bool moveDown();  // return true if the matrix changes
        bool add(int p);  // return true if the matrix changes
        void update1() {  // add a 2 to the possible lowest position
            for (int i = 0; i < rows*cols; i++)
                if ( add(i) )
                    return;
        }
        // void update2() {  // add a 2 to a random position
            // srand((unsigned)time(NULL));
            // unsigned int seed;
            // while (true) {
                // int n = rand_r(&seed) % (rows*cols);
                // if (add(n))
                    // return;
            // }
        // }
 
    private:
        int num[rows][cols];
};
 
#endif