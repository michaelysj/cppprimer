#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    int num;
    if (std::cin >> item1)
    {
        num = 1;
        while (std::cin >> item2)
        {
            if(item1.isbn() == item2.isbn())
            {
                ++num;
            }
            else
            {
                std::cout << item1.isbn() << " has " << num << " records" << std::endl;
                item1 = item2;
                num = 1;
            }
        }
        std::cout << item1.isbn() << " has " << num << " records" << std::endl;
    }
    else
    {
        std::cout << "no records found" << std::endl;
    }

    return 0;
}