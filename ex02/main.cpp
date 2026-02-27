#include <iostream>
#include <iomanip>


int main(void)
{
    std::string stringMain = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringMain;
    std::string &stringREF = stringMain;

    std::cout << "----- Addresses ------\n";

    std::cout << std::setw(25) << std::left << "Address of stringMain: " << &stringMain << std::endl;
    std::cout << std::setw(25) << std::left << "Address of stringPTR: " << &stringPTR << std::endl;
    std::cout << std::setw(25) << std::left << "Address of stringREF: " << &stringREF << std::endl;

    std::cout << "----- Values ------\n";

    std::cout << std::setw(25) << std::left << "Value of stringMain: " << stringMain << std::endl;
    std::cout << std::setw(25) << std::left << "Value of stringPTR: " << (*stringPTR) << std::endl;
    std::cout << std::setw(25) << std::left << "Value of stringREF: " << stringREF << std::endl;
}