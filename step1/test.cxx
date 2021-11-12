#include <stdio.h>
#include <iostream>
#include <string>

#include "testconfig.h"

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        std::cout << argv[0] << "Version " << demo_VERSION_MAJOR << "." << demo_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }

    printf("hello world!\n");
    return 0;
}