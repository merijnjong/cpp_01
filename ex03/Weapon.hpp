/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:19:18 by mjong             #+#    #+#             */
/*   Updated: 2025/07/31 14:43:59 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cctype>
#include <string>
#include <iomanip>
#include <iostream>
#include <limits>

class Weapon
{
	public:
		void				setType(std::string weapon);
		const std::string	getType();
		Weapon(std::string weapon);
		Weapon();
		~Weapon();

	private:
		std::string	weapon;
};
