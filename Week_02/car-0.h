#include <string>
class Car {
 public:
    void setManufacturer(std::string ts);
    void setDisplacement(double td);
    std::string getManufacturer() const;
    double getDisplacement() const;
 private:
    std::string manufacturer;
    double displacement;
};
