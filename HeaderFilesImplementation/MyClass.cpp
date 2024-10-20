#include "MyClass.h"

void MyClass::processVector(const std::vector<int> &vec) {
    for (int num : vec) {
        std::cout << "Processing number: " << num << std::endl;
    }
}

void MyClass::processInteger(int value) {
    std::cout << "Processing integer: " << value << std::endl;
}
