#include <iostream>

int main() {
    // Example 1: Converting from int to double
    int integerValue = 42;
    double doubleValue = static_cast<double>(integerValue);

    std::cout << "Original integer value: " << integerValue << std::endl;
    std::cout << "Converted to double: " << doubleValue << std::endl;

    // Example 2: Converting from double to int
    double anotherDouble = 3.14;
    int intFromDouble = static_cast<int>(anotherDouble);

    std::cout << "Original double value: " << anotherDouble << std::endl;
    std::cout << "Converted to int: " << intFromDouble << std::endl;

    return 0;
}
