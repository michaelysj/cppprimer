#include <iostream>

int main()
{
    std::cout << __FILE__ << std::endl;

    // "Who goes with F\145rgus?\012"
    std::cout << "Who goes with F\145rgus?\012" << std::endl;
    std::cout << 3.14e1L << std::endl;
    //std::cout << 1024f << std::endl; //cppprimer2.7.cpp:10:18: error: invalid suffix "f" on integer constant
    // should be 1024.f
    std::cout << 3.14L << std::endl;

    return 0;
}