#include <iostream>
using std::cout;
using std::endl;
using std::cin;

std::string global_str; // empty string
int global_int; // 0
int main()
{
    std::cout << __FILE__ << std::endl;

    int local_int; // undefined behavior
    std::string local_str; // empty string, because it has constructor
    int abc = 1000000;
    cout << local_int << endl; // output: 4196544

    return 0;
}