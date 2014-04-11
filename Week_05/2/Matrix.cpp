#include "matrix.h"
#include <iostream>
using std::cout;
using std::endl;
Matrix::Matrix(const Matrix& o) {
    N = o.N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            m[i][j] = o.m[i][j];
    }
}
void Matrix::setElement(int xx, int yy, int v) {
    m[xx][yy] = v;
}
Matrix Matrix::multiply(const Matrix& o) {
    Matrix ans(o.N);
    for (int i = 0; i < o.N; i++) {
        for (int j = 0; j < o.N; j++) {
            ans.m[i][j] = 0;
            for (int k = 0; k < o.N; k++) {
                ans.m[i][j] += m[i][k] * o.m[k][j];
            }
        }
    }
    return ans;
}
Matrix Matrix::transposition() {
    Matrix ans(N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            ans.m[i][j] = m[j][i];
        }
    }
    return ans;
}
void Matrix::print() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-1; j++) {
            cout << m[i][j] << " ";
        }
        cout << m[i][N-1] << endl;
    }
}
