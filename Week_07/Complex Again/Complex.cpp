#include "Complex.h"
const double eps = 1e-6;
Complex::Complex(double axc, double bxc) {
	rr = axc;
	ii = bxc;
}
ostream& operator <<(ostream& oo, const Complex& aaa) {
    if (fabs(aaa.ii) <= eps) oo << aaa.rr << "-" << fabs(aaa.ii) << "i";
	else oo << aaa.rr << "+" << aaa.ii << "i";
	return oo;
}
Complex operator +(const Complex& aa, const Complex& bb) {
    return Complex(aa.rr+bb.rr, aa.ii+bb.ii);
}
Complex operator -(const Complex& aa, const Complex& bb) {
    return Complex(aa.rr-bb.rr, aa.ii-bb.ii);
}    
Complex operator *(const Complex& aa, const Complex& bb) {
    return Complex(aa.rr*bb.rr-aa.ii*bb.ii, aa.rr*bb.ii+aa.ii*bb.rr);
}    
Complex operator /(const Complex& aa, const Complex& bb) {
    double x = (aa.rr*bb.rr+aa.ii*bb.ii)/(bb.rr*bb.rr+bb.ii*bb.ii);
    double y = (bb.rr*aa.ii-aa.rr*bb.ii)/(bb.rr*bb.rr+bb.ii*bb.ii);
    return Complex(x, y);
}
void operator +=(Complex& aa, const Complex& bb) {
    aa.rr+=bb.rr;
    aa.ii+=bb.ii;
}
void operator -=(Complex& aa, const Complex& bb) {
    aa.rr-=bb.rr;
    aa.ii-=bb.ii;
}    
void operator *=(Complex& aa, const Complex& bb) {
    double tmpr = aa.rr, tmpi = aa.ii;
    aa.rr=tmpr*bb.rr-tmpi*bb.ii;
    aa.ii=tmpr*bb.ii+tmpi*bb.rr;
}    
void operator /=(Complex& aa, const Complex& bb) {
    double x = (aa.rr*bb.rr+aa.ii*bb.ii)/(bb.rr*bb.rr+bb.ii*bb.ii);
    double y = (bb.rr*aa.ii-aa.rr*bb.ii)/(bb.rr*bb.rr+bb.ii*bb.ii);
    aa.rr=x;
    aa.ii=y;
}
bool operator ==(const Complex& aa, const Complex& bb) {
	return (fabs(aa.rr-bb.rr)<=eps)&&(fabs(aa.rr-bb.rr)<=eps);
}    
bool operator !=(const Complex& aa, const Complex& bb) {
    return !(aa==bb);
}       
