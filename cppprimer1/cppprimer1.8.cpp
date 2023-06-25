#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */;
    std::cout << /* "*/" /* "/*" */;
    return 0;
}
/* error output
g++ cppprimer1.8.cpp -o a.out
[yangs@dev-c76-1: ~/test/cppprimer] make -e OBJ=cppprimer1.8
g++ cppprimer1.8.cpp -o a.out
cppprimer1.8.cpp:7:24: warning: missing terminating " character [enabled by default]
     std::cout << /* "*/" */;
                        ^
cppprimer1.8.cpp:7:5: error: missing terminating " character
     std::cout << /* "*/" */;
     ^
make: *** [cppprimer1.8] Error 1
*/
