#include <iostream>
#include <Zombie.hpp>

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
