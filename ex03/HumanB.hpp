#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{

	private:

	std::string _weaponName;
	std::string _humanName;

	public:
	HumanB(std::string name);
	~HumanB() {};
	void	setWeapon(Weapon x);
	void	attack(void);
};

#endif