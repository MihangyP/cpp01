#ifndef __WEAPON_H__
# define __WEAPON_H__

#include <Weapon.hpp>

Weapon::Weapon(void) : type("") {}

Weapon::Weapon(string type)
{
	this->type = type;
}

const string&	Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(string new_type)
{
	this->type = new_type;
}

Weapon::~Weapon(void)
{

}

#endif // __WEAPON_H__
