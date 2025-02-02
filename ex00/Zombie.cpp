#include <Zombie.hpp>

Zombie*	newZombie(std::string name)
{
	Zombie* zombieDonto = new Zombie(name);
	return (zombieDonto);
}

void	randomChump(std::string name)
{
	Zombie	zombieCrimy(name);
	zombieCrimy.announce();
}

Zombie::Zombie(string name)
{
	this->name = name;	
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " destructed" << std::endl;
}
