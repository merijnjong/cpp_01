/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:11:36 by mjong             #+#    #+#             */
/*   Updated: 2025/05/28 14:52:03 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.hpp"

std::string replace(input input)
{
	std::string	output;
	size_t 		i = 0;

	while (i < input.content.length())
	{
		if (input.content.compare(i, input.string1.length(), input.string1) == 0)
		{
			output += input.string2;
			i += input.string1.length();
		}
		else
		{
			output += input.content[i];
			i++;
		}
	}
	return (output);
}

void outputInFile(input input, std::string output)
{
	std::string replace = ".replace";
	std::string newFilename = input.filename + replace;
	std::ofstream outputFile(newFilename);

	if (!outputFile.is_open())
	{
		std::cerr << "Failed to create output file: " << newFilename << std::endl;
		std::exit(EXIT_FAILURE);
	}
	if (!(outputFile << output))
	{
		std::cerr << "Failed to write to file: " << newFilename << std::endl;
		outputFile.close();
		std::exit(EXIT_FAILURE);
	}
	outputFile.close();
}

int	main(int argc, char *argv[])
{
	input		input;
	std::string	output;

	if (argc == 4)
	{
		input = {"", "", "", ""};		
		program(argv, input);
		output = replace(input);
		outputInFile(input, output);
	}
	else
	{
		std::cerr << "Program must be run like this:\n./replace <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	return (0);
}
