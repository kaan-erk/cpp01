#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	_weaponType = str;
}

Weapon::~Weapon() {}

void	Weapon::setType(std::string str)
{
	_weaponType = str;
}

std::string const&	Weapon::getType(void)
{
	return (_weaponType);
}
