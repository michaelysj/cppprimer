#include <iostream>

int main()
{
    std::cout << "Hello, World" << std::endl;
/*
 * /* nested comments */
 *
*/
    return 0;
}
/* error output
g++ cppprimer1.7.cpp -o a.out
cppprimer1.7.cpp: In function ‘int main()’:
cppprimer1.7.cpp:9:2: error: expected primary-expression before ‘/’ token
 */
  ^
cppprimer1.7.cpp:10:5: error: expected primary-expression before ‘return’
     return 0;
     ^
cppprimer1.7.cpp:10:5: error: expected ‘;’ before ‘return’
make: *** [cppprimer1.7] Error 1
*/
