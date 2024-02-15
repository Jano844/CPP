/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:43:06 by jsanger           #+#    #+#             */
/*   Updated: 2024/02/15 20:38:58 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string toUpper(const std::string& str) {
	std::string result = str;
	for (int i = 0; i < result.length(); i++) {
			result[i] = std::toupper(static_cast<unsigned char>(result[i])); 
		}
	return result;
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++){
		std::string upper_str = toUpper((std::string)argv[i]);
		std::cout << upper_str;
	}
	std::cout << std::endl;
	return (0);
}
