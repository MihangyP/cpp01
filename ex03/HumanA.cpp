#include <HumanA.hpp>

HumanA::HumanA(string name, Weapon& w) : weapon(w)
{
	this->name = name;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	// Absolutely nothing to put here
}
