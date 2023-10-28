#include "iostream"
int main()
{
    std::cout << "--------------------------------------------" << std::endl;
    std::string start = "HI THIS IS BRAIN";
    std::string &stringREF = start;
    std::string *stringPTR = &start;
    std::cout << "The address of the string: " << &start << std::endl;
    std::cout << "The address of the stringREF: " << &stringREF << std::endl;
    std::cout << "The address of the stringPTR: " << stringPTR << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "The value of the string: " << start << std::endl;
    std::cout << "The value of the stringREF: " << stringREF << std::endl;
    std::cout << "The value of the stringPTR: " << *stringPTR << std::endl;
    std::cout << "--------------------------------------------" << std:endl;
}