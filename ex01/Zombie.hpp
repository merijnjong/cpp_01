/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:30:44 by mjong             #+#    #+#             */
/*   Updated: 2025/03/12 14:53:39 by mjong            ###   ########.fr       */
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
		void	announce(int N);
		void	setName(std::string name);
		Zombie(void);
		~Zombie(void);

	private:
		std::string name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
