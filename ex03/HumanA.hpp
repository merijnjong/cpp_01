/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:19:06 by mjong             #+#    #+#             */
/*   Updated: 2025/03/20 15:06:43 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <string>
#include <iomanip>
#include <iostream>
#include <limits>
#include "Weapon.hpp"

class HumanA
{
	public:
		void	attack(void);
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();

	private:
		std::string	name;
		Weapon		&weapon;
};
