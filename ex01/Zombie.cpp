/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:29:24 by mjong             #+#    #+#             */
/*   Updated: 2025/03/20 15:22:22 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(int N)
{
	std::cout << "Number: " << N << " " << name << ": BraiiiiiiinnnzzzZ..." << std::endl;			
}

void	Zombie::setName(std::string name)
{
	this->name = name;
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
