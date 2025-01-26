#include <iostream>
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

int	main(void)
{
	Zombie zombie1("Donto");
	Zombie*	zombie2 = newZombie("Crimy");

	zombie1.announce();	
	zombie2->announce();
	randomChump("Man");
	delete zombie2;
	return (0);
}
