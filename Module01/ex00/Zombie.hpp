/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:10:40 by jsanger           #+#    #+#             */
/*   Updated: 2024/01/30 15:24:55 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		Zombie*	newZombie( std::string name);
		void	randomChump( std::string name);
		void	announce();
	private:
		std::string name;
};