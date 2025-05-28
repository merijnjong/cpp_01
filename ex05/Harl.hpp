/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:46:28 by mjong             #+#    #+#             */
/*   Updated: 2025/05/28 14:54:54 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cctype>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

class Harl
{
	public:
		void	complain(std::string level);
		Harl();
		~Harl();
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};
