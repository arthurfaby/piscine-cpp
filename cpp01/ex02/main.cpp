#include <iostream>

int main( void )
{
    const std::string   str = "HI THIS IS BRAIN";
    const std::string*  stringPTR = &str;
    const std::string&  stringREF = str;

    std::cout << "Memory adress of str            : " << &str << std::endl;
    std::cout << "Memory adress held by stringPTR : " << stringPTR << std::endl;
    std::cout << "Memory adress held by stringREF : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "Value of str                    : " << str << std::endl;
    std::cout << "Value pointed to by stringPTR   : " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF   : " << stringREF << std::endl;
}