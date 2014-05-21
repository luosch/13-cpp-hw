// Copyright (c) 2014 lsich
#ifndef DICT_H
#define DICT_H
#include <map>
#include <string>
using std::map;
using std::cout;
using std::endl;
using std::string;
using std::ostream;
class Dict {
 public:
    int size() {
        restrict();
        return __dictionary.size();
    }
    string& operator[](const string &__index) {
        auto __find = __dictionary.find(tolower(__index));
        if (__find == __dictionary.end())
            __dictionary[tolower(__index)] = "*** not in dictionary";
        return __dictionary[tolower(__index)];
    }
    void remove(const string &__index) {
        __dictionary.erase(__dictionary.find(tolower(__index)));
    }
    friend ostream& operator <<(ostream &__out, const Dict &__dict) {
        const map<string, string> &__output = __dict.__dictionary;
        for (auto i = __output.begin(); i != __output.end(); i++) {
            __out << i->first << "->" << i->second << endl;
        }
        return __out;
    }
    string tolower(string __upper) {
        int size = __upper.size();
        for (int i = 0; i < size; i++) {
            if (__upper[i] >= 'A' && __upper[i] <= 'Z') {
                __upper[i]-=('A'-'a');
            }
        }
        return __upper;
    }
    void restrict() {
        for (auto i = __dictionary.begin(); i != __dictionary.end(); i++) {
            if (i->second == "*** not in dictionary") {
                auto j = i;
                __dictionary.erase(j);
                break;
            }
        }
    }

 private:
    map<string, string> __dictionary;
};

#endif
