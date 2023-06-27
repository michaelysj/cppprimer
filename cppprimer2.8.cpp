#include <iostream>

int main()
{
    std::cout << __FILE__ << std::endl;

    std::cout << "2\x4d\012" << std::endl;
    std::cout << "2\t\x4d\012" << std::endl;

    return 0;
}