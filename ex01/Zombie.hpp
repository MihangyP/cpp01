#include <iostream>

typedef std::string string;

class	Zombie
{
	private:
		string	name;

	public:
		Zombie(void);
		Zombie(string name);
		~Zombie(void);

		void	announce(void);
};

Zombie*	zombieHorde( int N, std::string name );
