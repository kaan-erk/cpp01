#include "Weapon.hpp"

int main()
{
	Weapon cub = Weapon("Crude spiked club");
	std::cout << cub.getType() << std::endl;
	cub.setType("Silah");
	std::cout << cub.getType() << std::endl;
	return (0);
}