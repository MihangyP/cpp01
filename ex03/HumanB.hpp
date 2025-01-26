#ifndef __HUMAN_B_HPP__
# define __HUMAN_B_HPP__

#include <Weapon.hpp>

class	HumanB
{
	private:
		Weapon	weapon;
		string	name;

	public:
		HumanB(string name);
		~HumanB(void);
		
		void	attack(void);
		void	setWeapon(Weapon w);
};

#endif // __HUMAN_B_HPP__
