#include <iostream>

int main()
{
    int sum = 0, val = 1;
    // 只要val的值小于等于10，while循环就会持续执行
    for (int val = 1; val <= 10; ++val)
    {
        sum += val;
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    return 0;
}