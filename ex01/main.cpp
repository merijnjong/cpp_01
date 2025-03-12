/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:29:04 by mjong             #+#    #+#             */
/*   Updated: 2025/03/12 14:54:55 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;

	horde = zombieHorde(100, "Army");
	for (size_t i = 0; i < 100; i++)
    {
        horde[i].announce(i + 1);
    }
	delete[] horde;
	return (0);
}
