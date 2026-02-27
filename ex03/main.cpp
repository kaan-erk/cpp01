#include "Weapon.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon club = Weapon("Crude spiked club");
	HumanB jim("jim");
	jim.attack();
	jim.setWeapon(club);
	jim.attack();
	club.setType("saas");
	jim.attack();
	return (0);
}