#include "Car.h"
#include <string>
void Car::setManufacturer(std::string ts) {
    manufacturer = ts;
}
void Car::setDisplacement(double td) {
    displacement = td;
}
std::string Car::getManufacturer() const {
    return manufacturer;
}
double Car::getDisplacement() const {
    return displacement;
}
