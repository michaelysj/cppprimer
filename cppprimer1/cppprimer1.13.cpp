#include <iostream>

int main()
{
    int sum = 0, val = 50;
    for (val = 50; val <= 100; val++)
    {
        sum += val;
    }
    std::cout << "The sum o 50 to 100 inclusive is "
              << sum << std::endl;

    for (int val = 10; val >= 0;--val)
    {
        std::cout << val << std::endl;
    }
    return 0;
}

