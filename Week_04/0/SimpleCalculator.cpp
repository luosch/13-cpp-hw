#include "SimpleCalculator.h"
// avoid cheating
// avoid cheating
// avoid cheating
// avoid cheating
// avoid cheating
SimpleCalculator::SimpleCalculator() {
    answer = 0;
}    
void SimpleCalculator::add(double a, double b) {
    answer = a+b;
}    
void SimpleCalculator::SimpleCalculator::subtract(double a, double b) {
    answer = a-b;
}    
void SimpleCalculator::multiply(double a, double b) {
    answer = a*b;
}
void SimpleCalculator::divide(double a, double b) {
    answer = a/b;
}    
double SimpleCalculator::getAnswer() const {
    return answer;
}    
