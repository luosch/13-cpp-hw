// Copyright 2014 lsich.com
#ifndef OBSERVER_H
#define OBSERVER_H
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
class Observer {
 public:
    virtual ~Observer() {}
    virtual void notify() = 0;
};

class ObserverA: public Observer {
 public:
    void notify() {
        cout << "ObserverA is notified that Subject change." << endl;
    }
};

class ObserverB: public Observer {
 public:
    void notify() {
        cout << "ObserverB is notified that Subject change." << endl;
    }
};

class Subject {
 public:
    vector<Observer*> ob;
    void registerObserver(Observer *p) {
        ob.push_back(p);
    }
    void unregisterObserver(Observer *p) {
        vector<Observer*>::iterator it;
        for (it = ob.begin(); it != ob.end(); it++) {
            if (*it == p) {
                ob.erase(it);
                break;
            }
        }
    }
    void notifyObserver() {
        for (int i = 0; i < ob.size(); i++) {
            ob[i]->notify();
        }
    }
};

#endif
