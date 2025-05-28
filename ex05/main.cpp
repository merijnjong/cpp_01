/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:46:25 by mjong             #+#    #+#             */
/*   Updated: 2025/05/28 15:03:06 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	std::string	level;
	Harl		harl;

	if (argc == 2)
	{
		if (argv[1])
			level = argv[1];
		harl.complain(level);
	}
	else
	{
		std::cerr << "Program must be run like this:\n./harl <level>" << std::endl;
		return (1);
	}
	return (0);
}

// int main()
// {
//     Harl harl;

//     // Tests - Harl complains at different levels
//     std::cout << "Test 1: DEBUG level\n";
//     harl.complain("DEBUG");

//     std::cout << "\nTest 2: INFO level\n";
//     harl.complain("INFO");

//     std::cout << "\nTest 3: WARNING level\n";
//     harl.complain("WARNING");

//     std::cout << "\nTest 4: ERROR level\n";
//     harl.complain("ERROR");

//     std::cout << "\nTest 5: Unknown level\n";
//     harl.complain("SILLY");

//     return 0;
// }
