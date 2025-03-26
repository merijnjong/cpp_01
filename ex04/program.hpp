/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:11:42 by mjong             #+#    #+#             */
/*   Updated: 2025/03/26 14:25:29 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cctype>
#include <string>
#include <iomanip>
#include <iostream>
#include <limits>

typedef struct input
{
	std::string	filename;
	std::string	string1;
	std::string string2;
	std::string	content;
}	input;

void	program(char *argv[], input &input);
