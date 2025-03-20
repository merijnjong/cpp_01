/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:19:16 by mjong             #+#    #+#             */
/*   Updated: 2025/03/20 15:20:34 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string weapon)
{
	this->weapon = weapon;
}

std::string	Weapon::getType()
{
	return (weapon);
}

Weapon::Weapon(std::string weapon)
{
	this->weapon = weapon;
}

Weapon::Weapon()
{
	this->weapon = "club";
}

Weapon::~Weapon()
{
}
