#include<iostream>
#include<iomanip>
 
int main() {
    int count;
    std::cin >> count;
    std::cout << std::left;
    std::cout << std::setw(15) << "Miles" << std::setw(15) << "Kilometers"
              << std::endl;
 
    while (count--) {
        int num;
        std::cin >> num;
        std::cout << std::fixed << std::setprecision(3);
        std::cout << std::left;
        std::cout << std::setw(15) << num << std::setw(15) << num * 1.609
                  << std::endl;
    }
    return 0;
}
