/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:55:52 by mjong             #+#    #+#             */
/*   Updated: 2025/03/12 14:44:26 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cctype>
# include <string>
# include <iomanip>
# include <iostream>
# include <limits>

class Zombie {
	public:
		Zombie(std::string name);
		void	announce(void);
		Zombie(void);
		~Zombie(void);

	private:
		std::string name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
