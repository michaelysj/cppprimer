#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    std::cout << __FILE__ << std::endl;

    //std::cin >> int input_value; // cppprimer2.9.cpp:7:17: error: expected ‘;’ before ‘int’
    //int input_value; std::cin >> input_value; // fixed

    int i = {3.14}; // -Wall, cppprimer2.9.cpp:13:18: warning: narrowing conversion of ‘3.1400000000000001e+0’ from ‘double’ to ‘int’ inside { } is ill-formed in C++11 [-Wnarrowing]
    cout << i << endl;

    //double salary = wage = 9999.99; // cppprimer2.9.cpp:16:21: error: ‘wage’ was not declared in this scope
    //double salary =9999.99, wage = 9999.99;

    int ii = 3.14;

    return 0;
}