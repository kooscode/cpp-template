
#include <iostream>

int main(int argc, char** argv) 
{   

// #defines comes all the way through from Makefile
#ifdef USER_NAME
    std::cout << "Makefile Define \"USER_NAME\"=" << USER_NAME << std::endl;
#endif

    std::cout << "Hello World!" << std::endl;

    return 0;
}
