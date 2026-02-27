#include "Zombie.hpp"

int main(void)
{
    std::string str;
    int         i;

    std::cout << "ENTER NAME OF THE ZOMBİES" << std::endl;
    std::getline(std::cin, str);
    std::cout << "ENTER HORDE POPULATİON" << std::endl;
    std::cin >> i;
    Zombie* horde = zombieHorde(i, str);
    for (int j = 0; j < i; j++)
        horde->announce();
    delete[] horde;
}