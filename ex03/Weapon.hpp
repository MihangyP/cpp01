#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

#include <iostream>

typedef std::string string;

class	Weapon
{
	private:
		string	type;

	public:
		Weapon(void);
		Weapon(string type);
		~Weapon(void);

		const string&	getType(void);
		void	setType(string new_type);
};

#endif // __WEAPON_HPP__
