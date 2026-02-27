#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{

	private:

	std::string _weaponName;
	std::string _humanName;

	public:
	HumanA(std::string name, Weapon x);
	~HumanA() {};
	void	setWeapon(Weapon x);
	void	attack(void);
};

#endif