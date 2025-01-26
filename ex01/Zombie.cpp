#include <Zombie.hpp>

Zombie::Zombie(string name)
{
	this->name = name;	
}

Zombie::Zombie(void) : name("Default") {};

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

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie*	zombies = new Zombie[N];
	for (int i = 0; i < N; ++i)
		new (&zombies[i]) Zombie(name);
	return (zombies);
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " destructed" << std::endl;
}
