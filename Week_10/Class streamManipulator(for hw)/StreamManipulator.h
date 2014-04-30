// Copyright 2014 lsich
#ifndef STREAMMANIPULATOR_H
#define STREAMMANIPULATOR_H
class StreamManipulator {
 public:
    explict StreamManipulator(int lsich);
    void setNumber(int lsich);
    void showInDecimal();
    void showInOctal();
    void showInHexadecimal();
    void printInPrecision(double lsich, int luosch);
    void convertFahrenToCelsis(int lsich);
 private:
    int _num;
};

#endif
