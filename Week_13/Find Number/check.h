#define valid(x, y, s) (x >= 0 && y >= 0 && x < s && y < s)
bool check(int num[][1000], int row, const int &tar) {
    int X = row-1, Y = 0;
    while (valid(X, Y, row)) {
        if (tar > num[X][Y]) Y++;
        if (tar < num[X][Y]) X--;
        if (tar == num[X][Y]) return 1;
    }
    return 0;
}
