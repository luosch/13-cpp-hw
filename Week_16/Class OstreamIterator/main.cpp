#include <iostream>     // std::cout
#include <iterator>     // std::ostream_iterator
#include <vector>       // std::vector
#include <cstdio>
#include "OstreamIterator.h"
using std::vector;
using std::cout;
using std::cin;
using std::endl;
 
void CopyIterator(vector<int>::iterator begin, vector<int>::iterator end, \
        OstreamIterator out_it);
int main() {
    freopen("in.txt", "r", stdin);
    vector<int> myvector;
    int n;
    cin >> n;
    int i = 0;
    int temp = 0;
    for (; i < n; i ++) {
        cin >> temp;
        myvector.push_back(temp);
    }
    OstreamIterator out_it(&cout, ',');
    CopyIterator(myvector.begin(), myvector.end(), out_it);
    cout << endl;
    return 0;
}