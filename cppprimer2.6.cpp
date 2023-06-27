#include <iostream>

int main()
{
    std::cout << __FILE__ << std::endl;
    int month = 9, day = 7;
    int month1 = 09, day1 = 07; // error when compiling 09, cppprimer2.6.cpp:7:18: error: invalid digit "9" in octal constant
    std::cout << month << std::endl;
    std::cout << month1 << std::endl;
    std::cout << day << std::endl;
    std::cout << day1 << std::endl;
    return 0;
}