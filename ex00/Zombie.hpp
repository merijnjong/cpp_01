/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:55:52 by mjong             #+#    #+#             */
/*   Updated: 2025/03/20 15:21:45 by mjong            ###   ########.fr       */
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
		void	announce(void);
		Zombie(std::string name);
		Zombie();
		~Zombie();

	private:
		std::string name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
