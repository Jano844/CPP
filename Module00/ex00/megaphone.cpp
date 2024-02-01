/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:43:06 by jsanger           #+#    #+#             */
/*   Updated: 2024/02/01 16:18:22 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++){
		std::string test = std::string(argv[i]);
		std::transform(test.begin(), test.end(), test.begin(), ::toupper);
		std::cout << test;
	}
	std::cout << std::endl;
	return (0);
}
