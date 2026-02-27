#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_humanName = name;
	_weaponName(0);
}

void	HumanB::setWeapon(Weapon &x)
{
	this->_weaponName = &()x.getType();
}

void	HumanB::attack(void)
{
	if (this->_weaponName)
		std::cout << _humanName << " attacks with their " << _weaponName << std::endl;
	else
		std::cout << _humanName << " does not have any weapon " << std::endl;
}
