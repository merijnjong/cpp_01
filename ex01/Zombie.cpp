/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:29:24 by mjong             #+#    #+#             */
/*   Updated: 2025/03/12 14:57:17 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << " has been made" << std::endl;
}

void	Zombie::announce(int N)
{
	std::cout << "Number: " << N << " " << name << ": BraiiiiiiinnnzzzZ..." << std::endl;			
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::Zombie(void)
{	
}

Zombie::~Zombie(void)
{
	std::cout << name << " has been destroyed" << std::endl;
}
