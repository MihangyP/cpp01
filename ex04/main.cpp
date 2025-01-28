#include <iostream>
#include <fstream>
#include <stdexcept>
#include <cstdio>
#include <string>

typedef std::string string;

#define PRINT_ERROR_AND_RETURN(filename) 											\
		{							     											\
			std::cerr << "Error: " << filename + " could not opened" << std::endl;  \
			return (1);																\
		}								 											\

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "  Usage: ./Sedisforlosers <filename> s1 s2" << std::endl;
		return (1);
	}
	string	file_name = av[1];
	std::fstream	fs;
	std::fstream	new_file;
	string	new_file_name = file_name + ".replace";
	string	s1 = av[2];
	string	s2 = av[3];

	fs.open(file_name, std::fstream::in);
	if (!fs.is_open())
		PRINT_ERROR_AND_RETURN(file_name)
	
	std::ifstream	file(new_file_name);
	if (file.is_open()) // Check if <filename>.replace already exists
		remove(new_file_name.c_str());
	new_file.open(new_file_name, std::fstream::out | std::fstream::app);
	if (!new_file.is_open())
		PRINT_ERROR_AND_RETURN(new_file_name)

	string	data;
	while (std::getline(fs, data))
	{
		size_t	pos = data.find(s1);
		if (pos != std::string::npos)
		{
			int i = 0;
			while (i < (int)data.length())
			{
				if (i == (int)pos)
				{
					new_file << s2;
					i += s1.length();
				}
				else
				{
					new_file << data.at(i);
					++i;
				}
			}
		}
		else
			new_file << data;
		new_file << std::endl;
	}
	fs.close();
	new_file.close();
	return (0);
}
