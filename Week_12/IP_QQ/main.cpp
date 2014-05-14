// Copyright 2014 lsich.com
#include <map>
#include <cstdio>
#include <string>
#include <iostream>
using std::cin;
using std::map;
using std::cout;
using std::endl;
using std::pair;
using std::string;
using std::multimap;
int main() {
    int n, ss, exist;
    string qq, ip;
    multimap<string, string> mm, nn;
    multimap<string, string>::iterator iter;
    cin >> n;
    while (n--) {
        cin >> qq >> ip;
        exist = 0;
        ss= mm.count(qq);
        iter = mm.find(qq);
        for (int i = 0; i < ss; i++) {
            if (iter->second == ip) {
                exist = 1;
                break;
            }
            iter++;
        }
        if (!exist) mm.insert(pair<string, string>(qq, ip));
        exist = 0;
        ss= nn.count(ip);
        iter = nn.find(ip);
        for (int i = 0; i < ss; i++) {
            if (iter->second == qq) {
                exist = 1;
                break;
            }
            iter++;
        }
        if (!exist) nn.insert(pair<string, string>(ip, qq));
    }
    exist = 0;
    cin >> ip;
    for (iter = mm.begin(); iter != mm.end(); iter++) {
        if (iter->second == ip) {
            exist = 1;
        }
    }
    if (exist) {
        cout << ip << " ==> [ ";
        for (iter = mm.begin(); iter != mm.end(); iter++) {
            if (iter->second == ip) {
                cout << iter->first << ' ';
            }
        }
        cout << "]" << endl;
    } else {
        cout << "no qq" << endl;
    }
    exist = 0;
    cin >> qq;
    for (iter = nn.begin(); iter != nn.end(); iter++) {
        if (iter->second == qq) exist = 1;
    }
    if (exist) {
        cout << qq << " ==> [ ";
        for (iter = nn.begin(); iter != nn.end(); iter++) {
            if (iter->second == qq) cout << iter->first << ' ';
        }
        cout << "]" << endl;
    } else {
        cout << "no ip" << endl;
    }
}
