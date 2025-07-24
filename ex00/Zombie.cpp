/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:56:03 by mjong             #+#    #+#             */
/*   Updated: 2025/03/20 15:21:55 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;			
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << " has been made" << std::endl;
}

Zombie::Zombie()
{	
}

Zombie::~Zombie()
{
	std::cout << name << " has been destroyed" << std::endl;
}
