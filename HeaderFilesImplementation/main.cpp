// main.cpp
#include "MyClass.h"
#include <vector>

int main() {
    MyClass obj;
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    obj.processVector(myVector);
    obj.processInteger(42);
    return 0;
}
