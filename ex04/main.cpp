/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:11:36 by mjong             #+#    #+#             */
/*   Updated: 2025/03/26 14:25:13 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.hpp"

int	main(int argc, char *argv[])
{
	input	handleInput;
	
	if (argc = 4)
	{
		program(argv, handleInput);
	}
	else
	{
		std::cout << "Program must be run like this:\n./program <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	return (0);
}
