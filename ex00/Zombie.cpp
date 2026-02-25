#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _zombieName = name;
}

Zombie::~Zombie()
{
    std::cout << _zombieName << " is dead." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << _zombieName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
