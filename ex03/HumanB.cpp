#include <HumanB.hpp>

HumanB::HumanB(string name)
{
	this->name = name;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon w)
{
	this->weapon = w;
}

HumanB::~HumanB(void)
{
}
