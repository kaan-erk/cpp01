#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
	private:
		std::string	_weaponType;
	public:
		Weapon(std::string str);
		~Weapon();
		void				setType(std::string str);
		std::string const&	getType(void);
};

#endif