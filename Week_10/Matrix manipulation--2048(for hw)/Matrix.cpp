#include <string.h>
#include "Matrix.h"
Matrix::Matrix(int p1, int p2) {
    memset(num, 0, sizeof(num));
    num[p1/4][p1%4] = num[p2/4][p2%4] 
}
bool Matrix::moveLeft() {
    int cmp[4][4];
    for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++) cmp[i][j] = num[i][j];
    
    for (int i = 0; i < 4; i++) {
        if (num[i][0] == 0) {
            num[i][0] = num[i][1];
            num[i][1] = num[i][2];
            num[i][2] = num[i][3];
        }
    }
}
        bool moveRight();  // return true if the matrix changes
        bool moveUp();  // return true if the matrix changes
        bool moveDown();  // return true if the matrix changes
        bool add(int p);  // return true if the matrix changes
        void update1() {  // add a 2 to the possible lowest position
            for (int i = 0; i < rows*cols; i++)
                if ( add(i) )
                    return;
        }
        void update2() {  // add a 2 to a random position
            srand((unsigned)time(NULL));
            unsigned int seed;
            while (true) {
                int n = rand_r(&seed) % (rows*cols);
                if (add(n))
                    return;
            }
        }
 
    private:
        int num[rows][cols];