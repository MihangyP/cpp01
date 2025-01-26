#include <iostream>

typedef std::string string;

class	Zombie
{
	private:
		string	name;

	public:
		Zombie(string name);
		~Zombie(void);

		void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

