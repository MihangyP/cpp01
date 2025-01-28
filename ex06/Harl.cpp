#include <Harl.hpp>

Harl::Harl(void)
{

}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "Le problème avec ce monde est que les personnes intelligentes sont pleines de doutes tandis que les personnes stupides sont pleines de confiance.\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "La différence entre une démocratie et une dictature, c'est qu'en démocratie tu votes avant d'obéir aux ordres, dans une dictature, tu perds pas ton temps à voter\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "C'est ça le problème avec la gnôle, songeai-je en me servant un verre. S'il se passe un truc moche, on boit pour essayer d'oublier; s'il se passe un truc chouette, on boit pour le fêter, et s'il ne se passe rien, on boit pour qu'il se passe quelque chose.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "Les femmes raffolent des imposteurs parce qu'ils savent embellir la réalité.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for (i = 0; i < 4; i++)
		if (levels[i] == level) break;

	switch (i)
	{
		case 0: debug();
		case 1: info();
		case 2: warning();
		case 3: { error(); break;}
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

Harl::~Harl(void)
{

}
