// Copyright 2014 lsich.com
#ifndef SYSTEM_ACTIVITY_H
#define SYSTEM_ACTIVITY_H
#include <string>
#include <iostream>
#include "abstract.h"
using std::cout;
using std::endl;
using std::string;
class Windows: public System {
 public:
    string info() {
        return "Windows QAQ";
    }
};
class Linux: public System {
 public:
    string info() {
        return "Linux T_T";
    }
};
class Game: public Activity {
 public:
    Game(System* sys, string name): Activity(sys, name) {
        system_ = sys;
        name_ = name;
    }
    ~Game() {
        delete system_;
    }
    string play() {
        return name_+" is playing game on "+system_->info();
    }
};
class Study: public Activity {
 public:
    Study(System* sys, string name): Activity(sys, name) {
        system_ = sys;
        name_ = name;
    }
    ~Study() {
        delete system_;
    }
    string play() {
        return name_+" is studying on "+system_->info();
    }
};
#endif
