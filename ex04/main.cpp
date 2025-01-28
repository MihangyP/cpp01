/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <pmihangy@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 09:57:28 by pmihangy          #+#    #+#             */
/*   Updated: 2025/01/28 12:33:09 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>

typedef std::string string;

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
	{
		std::cerr << "Error: " << file_name + " could not opened" << std::endl;
		return (1);
	}

	new_file.open(new_file_name, std::fstream::out | std::fstream::app);
	if (!new_file.is_open())
	{
		std::cerr << "Error: " << new_file_name + " could not opened" << std::endl;
		return (1);
	}

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
					for (int j = 0; j < (int)s2.length(); ++j)
						new_file << s2.at(j);
					i += s2.length();
				}
				else
				{
					new_file << data.at(i);
					++i;
				}
			}
			new_file << std::endl;
		}
		else
			new_file << data << std::endl;
	}
	fs.close();
	new_file.close();
	return (0);
}
