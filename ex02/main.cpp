#include <iostream>

typedef std::string string;

int	main(void)
{
	string s = "HI THIS IS BRAIN";
	string	*stringPTR = &s;
	string&	stringREF = s;	

	std::cout << &s << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << s << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}
