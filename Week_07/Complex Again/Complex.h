#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cmath>
using std::ostream;
using std::cout;
using std::endl;
class Complex;
ostream& operator <<(ostream&, const Complex&);
Complex operator +(const Complex&, const Complex&);
Complex operator -(const Complex&, const Complex&);
Complex operator *(const Complex&, const Complex&);
Complex operator /(const Complex&, const Complex&);
void operator +=(Complex&, const Complex&);
void operator -=(Complex&, const Complex&);
void operator *=(Complex&, const Complex&);
void operator /=(Complex&, const Complex&);
bool operator ==(const Complex&, const Complex&);
bool operator !=(const Complex&, const Complex&);
class Complex{
  public:
   Complex(double = 0.0, double = 0.0);
   friend ostream& operator <<(ostream&, const Complex&);
   friend Complex operator +(const Complex&, const Complex&);
   friend Complex operator -(const Complex&, const Complex&);
   friend Complex operator *(const Complex&, const Complex&);
   friend Complex operator /(const Complex&, const Complex&);
   friend void operator +=(Complex&, const Complex&);
   friend void operator -=(Complex&, const Complex&);
   friend void operator *=(Complex&, const Complex&);
   friend void operator /=(Complex&, const Complex&);
   friend bool operator ==(const Complex&, const Complex&);
   friend bool operator !=(const Complex&, const Complex&);
   void SetReal(double ree){rr = ree;}
   void SetImag(double imm){ii = imm;}
  private:
   double rr; 
   double ii;
};
#endif
