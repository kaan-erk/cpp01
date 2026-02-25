#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    std::cout << "---STACK ZOMBIE TEST---" << std::endl;
    randomChump("Mr.stack");

    std::cout << "\n---HEAP ZOMBIE TEST---" << std::endl;
    Zombie* heapZombie = newZombie("Heapy");
    heapZombie->announce();

    std::cout << "\n---KILL ZOMBIE---" << std::endl;
    delete heapZombie;

    std::cout << "\n---FINISHED---" << std::endl;
    return 0;
}