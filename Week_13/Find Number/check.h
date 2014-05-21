// num[][]是矩阵,row是行数和列数(相等的),tar是目标值

// Step-wise线性搜索
// 时间复杂度O(n)
#define valid(x, y, s) (x >= 0 && y >= 0 && x < s && y < s)
bool check(int num[][1000], int row, const int &tar) {
    int X = row-1, Y = 0;
    while (valid(X, Y, row)) {
        if (tar > num[X][Y]) Y++;
        else if (tar < num[X][Y]) X--;
        else if (tar == num[X][Y]) return 1;
    }
    return 0;
}

// 二分查找大法
// 时间复杂度O(nlog(n))
// bool binarySearch(int num[][1000], int i, const int &size, const int &tar) {
    // int l = 0, r = size-1, mid = (l+r)>>1;
    // while (l < r) {
        // if (num[i][mid] < tar) {
            // l = mid+1;
        // }
        // if (num[i][mid] > tar) {
            // r = mid;
        // }
        // mid = (l+r)>>1;
        // if (num[i][mid] == tar) return 1;
    // }
    // return 0;
// }
// bool check(int num[][1000], int row, const int &tar) {
    // for (int i = 0; i < row; i++) {
       // if (binarySearch(num, i, row, tar)) return 1;
    // }
    // return 0;
// }
