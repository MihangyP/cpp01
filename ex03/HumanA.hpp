#ifndef __HUMAN_A_HPP__
# define __HUMAN_A_HPP__

#include <Weapon.hpp>

class	HumanA
{
	private:
		Weapon&	weapon;
		string	name;

	public:
		HumanA(string name, Weapon& weapon);
		~HumanA(void);
		void	attack(void);
};

#endif // __HUMAN_A_HPP__
