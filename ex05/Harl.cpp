#include <Harl.hpp>

typedef void (Harl::*f)();

Harl::Harl(void)
{

}

void	Harl::debug(void)
{
	std::cout << "Debug" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Info" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Warning" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Error" << std::endl;
}

void	Harl::complain(std::string level)
{
	string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	f	f_array[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	int	i = 0;
	while (i < 4 && levels[i] != level)
		++i;
	if (i < 4)
		(this->*f_array[i])();
}

Harl::~Harl(void)
{

}
