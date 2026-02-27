#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_humanName = name;
}

void	HumanB::setWeapon(Weapon x)
{
	_weaponName = x.getType();;
}

void	HumanB::attack(void)
{
	std::cout << _humanName << " attacks with their " << _weaponName << std::endl;
}
