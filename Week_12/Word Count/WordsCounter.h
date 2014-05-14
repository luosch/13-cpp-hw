// Copyright 2014 lsich
#ifndef WORDS_COUNTER
#define WORDS_COUNTER
#include <set>
#include <string>
using std::set;
using std::string;
class WordsCounter {
 public:
    explicit WordsCounter(int lsc) {
        bbb = lsc;
    }
    void setBound(int  lsc) {
        bbb = lsc;
    }
    int operator()(string lsc) {
        int i, len;
        set<string> count;
        len = lsc.length();
        for (i = 0; i < len; i++) {
          string tmp;
          while (lsc[i] != ' ') {
            tmp+=lsc[i];
            i++;
            if (i >= len) break;
          }
          if (tmp.length() && tmp.length() >= bbb)
            count.insert(tmp);
        }
        return count.size();
  }

 private:
    int bbb;
};

#endif
