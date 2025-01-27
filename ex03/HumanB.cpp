#include <HumanB.hpp>

HumanB::HumanB(string name)
{
	this->name = name;
	this->weapon = NULL;
}

void	HumanB::attack(void)
{
	if (this->weapon == NULL)
		std::cout << this->name << " attacks with their " << "no existing weapon" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& w)
{
	this->weapon = &w;
}

HumanB::~HumanB(void)
{
}
