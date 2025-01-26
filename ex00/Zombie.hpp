#include <iostream>
#include <iomanip>

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
