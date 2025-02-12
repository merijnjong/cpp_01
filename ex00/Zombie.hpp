/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:55:52 by mjong             #+#    #+#             */
/*   Updated: 2025/02/12 14:12:54 by mjong            ###   ########.fr       */
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
		void announce() {
			std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;			
		}
		void setName() {
			this->name = name;
		}
		std::string getName() {
			return (name);
		}

	private:
		std::string name;
};

#endif
