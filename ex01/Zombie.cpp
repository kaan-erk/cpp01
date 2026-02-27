#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
    std::cout << _zombieName << " is dead." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << _zombieName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    _zombieName = name;
}