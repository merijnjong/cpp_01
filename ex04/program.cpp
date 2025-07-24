/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:11:39 by mjong             #+#    #+#             */
/*   Updated: 2025/05/28 14:43:52 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.hpp"

std::string readInfile(std::ifstream &file)
{
	std::ostringstream	buffer;
	std::string			line;

	while (std::getline(file, line))
	{
		buffer << line << '\n';
	}

	std::string content = buffer.str();

	if (!content.empty() && content.back() == '\n')
		content.pop_back();
	return (content);
}


void program(char* argv[], input &input)
{
	if (!argv[1] || !argv[2] || !argv[3])
	{
		std::cerr << "Program must be run like this:\n./replace <filename> <string1> <string2>" << std::endl;
		std::exit(EXIT_FAILURE);
	}

	input.filename = std::string(argv[1]);
	input.string1 = std::string(argv[2]);
	input.string2 = std::string(argv[3]);

	if (input.string1.empty())
	{
		std::cerr << "Error: string1 cannot be empty.\n";
		exit(EXIT_FAILURE);
	}
	std::ifstream	file(input.filename);
	if (!file.is_open())
	{
		std::cerr << "Error: Cannot open file '" << input.filename << "'\n";
		std::exit(EXIT_FAILURE);
	}
	input.content = readInfile(file);
	file.close();
}
