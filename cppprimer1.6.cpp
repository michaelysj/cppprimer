#include <iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
/*    std::cout << "The sum of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;*/
    // fix
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    return 0;
}
/* error output
g++ cppprimer1.6.cpp -o a.out
cppprimer1.6.cpp: In function ‘int main()’:
cppprimer1.6.cpp:9:15: error: expected primary-expression before ‘<<’ token
               << " and " << v2;
               ^
cppprimer1.6.cpp:10:15: error: expected primary-expression before ‘<<’ token
               << " is " << v1 + v2 << std::endl;
               ^
make: *** [cppprimer1.6] Error 1
*/
