/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:10:40 by jsanger           #+#    #+#             */
/*   Updated: 2024/02/02 16:49:19 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie(void);
		~Zombie(void);
		void	setName(std::string name);
		void	announce();
};