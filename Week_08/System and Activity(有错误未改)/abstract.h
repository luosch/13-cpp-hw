// Copyright 2014 lsich.com
#ifndef abstract_H
#define abstract_H
#include <string>
using std::string;
class System {
 public:
  virtual string info() = 0;
  virtual ~System() {}
};
 
class Activity {
 protected:
  System* system_;
  string name_;
 public:
  Activity(System* system, string name) {}
  ~Activity() {}
  virtual string play() = 0;
};
 
#endif
