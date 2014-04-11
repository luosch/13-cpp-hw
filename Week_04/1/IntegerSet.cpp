#include "IntegerSet.h"
// avoid cheating lsc
// avoid cheating lsc
// avoid cheating lsc
// avoid cheating lsc
// avoid cheating lsc
IntegerSet::IntegerSet(int s[], int l) {
    for (int i = 0; i < 101; i++) set[i] = 0;
    for (int i = 0; i < l; i++) set[s[i]] = 1;    
}
IntegerSet IntegerSet::unionOfSets(const IntegerSet& a) {
    IntegerSet c;
    for (int i = 0; i < 101; i++)
        if (a.set[i]||set[i]) c.set[i] = 1;
    return c;
}    
IntegerSet IntegerSet::intersectionOfSets(const IntegerSet& a) {
    IntegerSet c;
    for (int i = 0; i < 101; i++)
        if (a.set[i]&&set[i]) c.set[i] = 1;
    return c;
}    
void IntegerSet::emptySet() {
    for (int i = 0; i < 101; i++) set[i] = 0;
}
void IntegerSet::insertElement(int element) {
    set[element] = 1;
}    
void IntegerSet::deleteElement(int element) {
    set[element] = 0;
}    
bool IntegerSet::isEqualTo(const IntegerSet& x) const {
    for (int i = 0; i < 101; i++)
        if (set[i]!=x.set[i]) return 0;
    return 1;
}
