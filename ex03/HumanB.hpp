/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:19:11 by mjong             #+#    #+#             */
/*   Updated: 2025/03/20 15:17:31 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <string>
#include <iomanip>
#include <iostream>
#include <limits>
#include "Weapon.hpp"

class HumanB
{
	public:
		void	attack(void);
		void	setWeapon(Weapon &weapon);
		HumanB(const std::string &name);
		~HumanB();

	private:
		std::string	name;
		Weapon		*weapon;
};
