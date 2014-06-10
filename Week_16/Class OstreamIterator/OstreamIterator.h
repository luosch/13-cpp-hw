// C/C++ File
// AUTHOR:   LaoSi
// FILE:     OstreamIterator.cpp
// 2014 @laosiaudi All rights reserved
// CREATED:  2014-06-10 00:41:23
// MODIFIED: 2014-06-10 01:32:46
 
#ifndef _OSTREAM_INTERATOR_
#define _OSTREAM_INTERATOR_
#include <iostream>
 
using std::cout;
using std::ostream;
 
class OstreamIterator {
    public:
        OstreamIterator(ostream *s, char delim);
        OstreamIterator & operator =(const int &value);
        OstreamIterator & operator*();
        OstreamIterator & operator++();
        OstreamIterator & operator++(int);
    private:
        ostream *output;
        char delim;
};
#endif