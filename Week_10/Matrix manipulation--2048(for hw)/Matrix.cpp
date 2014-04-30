// Copyright 2014 lsich.com
#include <string.h>
#include <iomanip>
#include <iostream>
#include "Matrix.h"
using std::setw;
using std::cout;
using std::endl;
Matrix::Matrix(int p1, int p2) {
    memset(num, 0, sizeof(num));
    num[p1/4][p1%4] = num[p2/4][p2%4] = 2;
}
bool Matrix::moveLeft() {
    int cmp[4][4];
    for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++) cmp[i][j] = num[i][j];
    for (int i = 0; i < 4; i++) {
        if (num[i][0] == num[i][1]) {
            num[i][0]*= 2;
            num[i][1] = 0;
            if (num[i][2] == num[i][3]) {
                num[i][2]*= 2;
                num[i][3] = 0;
            }
        } else if (num[i][0] == num[i][2] && !num[i][1]) {
            num[i][0]*= 2;
            num[i][2] = 0;
        } else if (num[i][0] == num[i][3] && !num[i][1] && !num[i][2]) {
            num[i][0]*= 2;
            num[i][3] = 0;
        } else if (num[i][1] == num[i][2]) {
            num[i][1]*= 2;
            num[i][2] = 0;
        } else if (num[i][1] == num[i][3] && !num[i][2]) {
            num[i][1]*= 2;
            num[i][3] = 0;
        } else if (num[i][2] == num[i][3]) {
            num[i][2]*= 2;
            num[i][3] = 0;
        }
        for (int j = 1; j <= 3; j++) {
            if (num[i][j]) {
                int tmp;
                for (tmp = 0; num[i][tmp] && tmp < j; tmp++) {}
                if (tmp != j) {
                    num[i][tmp] = num[i][j];
                    num[i][j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++) if (cmp[i][j] != num[i][j]) return 1;
    return 0;
}
bool Matrix::moveRight() {
    int cmp[4][4];
    for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++) cmp[i][j] = num[i][j];
    for (int i = 0; i < 4; i++) {
        if (num[i][3] == num[i][2]) {
            num[i][3]*= 2;
            num[i][2] = 0;
            if (num[i][1] == num[i][0]) {
                num[i][1]*= 2;
                num[i][0] = 0;
            }
        } else if (num[i][3] == num[i][1] && !num[i][2]) {
            num[i][3]*= 2;
            num[i][1] = 0;
        } else if (num[i][3] == num[i][0] && !num[i][2] && !num[i][1]) {
            num[i][3]*= 2;
            num[i][0] = 0;
        } else if (num[i][2] == num[i][1]) {
            num[i][2]*= 2;
            num[i][1] = 0;
        } else if (num[i][2] == num[i][0] && !num[i][1]) {
            num[i][2]*= 2;
            num[i][0] = 0;
        } else if (num[i][1] == num[i][0]) {
            num[i][1]*= 2;
            num[i][0] = 0;
        }
        for (int j = 2; j >= 0; j--) {
            if (num[i][j]) {
                int tmp;
                for (tmp = 3; num[i][tmp] && tmp > j; tmp--) {}
                if (tmp != j) {
                    num[i][tmp] = num[i][j];
                    num[i][j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++) if (cmp[i][j] != num[i][j]) return 1;
    return 0;
}
bool Matrix::moveUp() {
    int cmp[4][4];
    for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++) cmp[i][j] = num[i][j];
    for (int i = 0; i < 4; i++) {
        if (num[0][i] == num[1][i]) {
            num[0][i]*= 2;
            num[1][i] = 0;
            if (num[2][i] == num[3][i]) {
                num[2][i]*= 2;
                num[3][i] = 0;
            }
        } else if (num[0][i] == num[2][i] && !num[1][i]) {
            num[0][i]*= 2;
            num[2][i] = 0;
        } else if (num[0][i] == num[3][i] && !num[1][i] && !num[2][i]) {
            num[0][i]*= 2;
            num[3][i] = 0;
        } else if (num[1][i] == num[2][i]) {
            num[1][i]*= 2;
            num[2][i] = 0;
        } else if (num[1][i] == num[3][i] && !num[2][i]) {
            num[1][i]*= 2;
            num[3][i] = 0;
        } else if (num[2][i] == num[3][i]) {
            num[2][i]*= 2;
            num[3][i] = 0;
        }
        for (int j = 1; j <= 3; j++) {
            if (num[j][i]) {
                int tmp;
                for (tmp = 0; num[tmp][i] && tmp < j; tmp++) {}
                if (tmp != j) {
                    num[tmp][i] = num[j][i];
                    num[j][i] = 0;
                }
            }
        }
    }
    for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++) if (cmp[i][j] != num[i][j]) return 1;
    return 0;
}
bool Matrix::moveDown() {
    int cmp[4][4];
    for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++) cmp[i][j] = num[i][j];
    for (int i = 0; i < 4; i++) {
        if (num[3][i] == num[2][i]) {
            num[3][i]*= 2;
            num[2][i] = 0;
            if (num[1][i] == num[0][i]) {
                num[1][i]*= 2;
                num[0][i] = 0;
            }
        } else if (num[3][i] == num[1][i] && !num[2][i]) {
            num[3][i]*= 2;
            num[1][i] = 0;
        } else if (num[3][i] == num[0][i] && !num[2][i] && !num[1][i]) {
            num[3][i]*= 2;
            num[0][i] = 0;
        } else if (num[2][i] == num[1][i]) {
            num[2][i]*= 2;
            num[1][i] = 0;
        } else if (num[2][i] == num[0][i] && !num[1][i]) {
            num[2][i]*= 2;
            num[0][i] = 0;
        } else if (num[1][i] == num[0][i]) {
            num[1][i]*= 2;
            num[0][i] = 0;
        }
        for (int j = 2; j >= 0; j--) {
            if (num[j][i]) {
                int tmp;
                for (tmp = 3; num[tmp][i] && tmp > j; tmp--) {}
                if (tmp != j) {
                    num[tmp][i] = num[j][i];
                    num[j][i] = 0;
                }
            }
        }
    }
    for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++) if (cmp[i][j] != num[i][j]) return 1;
    return 0;
}
bool Matrix::add(int ppp) {
    if (!num[ppp/4][ppp%4]) num[ppp/4][ppp%4] = 2;
    else return 0;
    return 1;
}
ostream& operator<<(ostream& lsc, const Matrix& mm) {
    lsc << "-----------------------------" << endl;
    for (int i = 0; i < 4; i++) {
        lsc << '|';
        for (int j = 0; j < 4; j++) {
            if (mm.num[i][j] != 0) lsc << setw(6) << mm.num[i][j] << '|';
            else lsc << setw(6) << ' ' << '|';
        }
        lsc << endl;
    }
    lsc << "-----------------------------" << endl;
    return lsc;
}
