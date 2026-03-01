#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(0), _humanName(name)
{
}

void	HumanB::setWeapon(Weapon &x)
{
	_weapon = &x;
}

void	HumanB::attack(void)
{
	if (this->_weapon)
		std::cout << _humanName << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << _humanName << " does not have any weapon " << std::endl;
}
