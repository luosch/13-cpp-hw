#include "OstreamIterator.h"
#include <vector>
using std::vector;
typedef OstreamIterator OI;  
typedef vector<int>::iterator iter;
void CopyIterator(iter lsc, iter zyl, OI sysu) {
    for (lsc = lsc; lsc != zyl; lsc++) {
        sysu = *lsc;
        ++sysu;
    }
}
OstreamIterator::OstreamIterator(ostream *s, char lsc) {
    output = s;
    delim = lsc;
}
OI& OI::operator =(const int &lsc) {
    *output << lsc;
    return *this;
}
OI& OI::operator++() {
    *output << ',';
    return *this;
}
OI& OI::operator*() { }
OI& OI::operator++(int) { }
