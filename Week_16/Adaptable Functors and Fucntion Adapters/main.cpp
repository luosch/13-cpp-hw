#include <cstdlib>
#include <iostream>
#include <vector>
#include "Adapter.h"
 
using std::cin;
using std::cout;
using std::endl;
 
const int LIM = 6;
 
void Show(double v) {
    std::cout.width(6);
    std::cout << v << ' ';
}
 
int main(int argc, char *argv[]) {
    freopen("in.txt", "r", stdin);
    double arr1[LIM];
    double arr2[LIM];
    for (int i = 0; i < LIM; i++)
        cin >> arr1[i];
    for (int i = 0; i < LIM; i++)
        cin >> arr2[i];
    vector<double> gr8(arr1, arr1 + LIM);
    vector<double> m8(arr2, arr2 + LIM);
    cout.setf(ios_base::fixed);
    cout.precision(1);
    cout << "gr8: \t";
    Adapter::show(gr8.begin(), gr8.end(), Show);
    cout << endl;
    cout << "m8: \t";
    Adapter::show(m8.begin(), m8.end(), Show);
    cout << endl;
    vector<double> sum(LIM);
    Adapter::add(gr8.begin(), gr8.end(), m8.begin(), sum.begin());
    cout << "sum: \t";
    Adapter::show(sum.begin(), sum.end(), Show);
    cout << endl;
    vector<double> prod(LIM);
    Adapter::multi(gr8.begin(), gr8.end(), prod.begin(), 2.5);
    cout << "prod: \t";
    Adapter::show(prod.begin(), prod.end(), Show);
    cout << endl;
    return EXIT_SUCCESS;
}