#include <iostream>
#include "clockType.h"

int main() {
    // Test default constructor
    clockType clock1;
    std::cout << "Initial time (clock1, default constructor): ";
    clock1.printTime();  // Expected: 00:00:00

    // Test parameterized constructor
    clockType clock2(12, 30, 45);
    std::cout << "Initial time (clock2, parameterized constructor): ";
    clock2.printTime();  // Expected: 12:30:45
    std::cout << std::endl;

    // Test setTime function
    clock1.setTime(23, 59, 58);
    std::cout << "Time after setting (clock1): ";
    clock1.printTime();  // Expected: 23:59:58
    std::cout << std::endl;

    // Test incrementSeconds function
    clock1.incrementSeconds();
    std::cout << "Time after incrementing seconds (clock1): ";
    clock1.printTime();  // Expected: 23:59:59
    std::cout << std::endl;

    clock1.incrementSeconds();
    std::cout << "Time after another increment (clock1): ";
    clock1.printTime();  // Expected: 00:00:00
    std::cout << std::endl;

    // Test incrementMinutes function
    clock1.setTime(23, 59, 58);
    clock1.incrementMinutes();
    std::cout << "Time after incrementing minutes (clock1): ";
    clock1.printTime();  // Expected: 00:00:58
    std::cout << std::endl;

    // Test incrementHours function
    clock1.setTime(23, 59, 58);
    clock1.incrementHours();
    std::cout << "Time after incrementing hours (clock1): ";
    clock1.printTime();  // Expected: 00:59:58
    std::cout << std::endl;

    // Test getTime function
    int hours, minutes, seconds;
    clock2.getTime(hours, minutes, seconds);
    std::cout << "Time retrieved from clock2: ";
    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;  // Expected: 12:30:45

    // Test equalTime function
    if (clock1.equalTime(clock2)) {
        std::cout << "clock1 and clock2 are equal." << std::endl;
    } else {
        std::cout << "clock1 and clock2 are not equal." << std::endl;  // Expected: Not equal
    }

    clock1.setTime(12, 30, 45);
    if (clock1.equalTime(clock2)) {
        std::cout << "clock1 and clock2 are equal." << std::endl;  // Expected: Equal
    } else {
        std::cout << "clock1 and clock2 are not equal." << std::endl;
    }

    return 0;
}
