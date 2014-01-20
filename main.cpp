#include "strfunctions.h"
#include <iostream>

int main(int argc, char *argv[])
{  
    const int MAX_WIDTH = 160; // this is max length of english word
    char buf[MAX_WIDTH + 1]{0};

    if (argc >= 2 ) {
        if (str_f::strlen(argv[1]) <= 160) {
            str_f::strcpy(buf, argv[1]);
            std::cout << (str_f::strcmp(str_f::strrev(buf), argv[1]) != 0 ? "no palindrome" : "palindrome") << std::endl;
        } else {
            std::cout << "Word mustn't be more than " << MAX_WIDTH << " chars!" << std::endl;
        }
    } else {
        std::cout << "Use a program with one parameter. For example: palindrome level" << std::endl;
    }

    return 0;
}

