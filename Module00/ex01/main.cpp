/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:23:40 by jsanger           #+#    #+#             */
/*   Updated: 2024/03/26 14:45:58 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	phonebook	phonebook;
	std::string	command;
	signal(SIGINT, phonebook::signal_handler);

	while (1)
	{
		std::cout	<< "Enter a command: ";
		std::cin	>> command;
		if (std::cin.eof()) {
			phonebook.exit_phonebook();
			return 1;
		}
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
		{
			phonebook.exit_phonebook();
			return 0;
		}
		else {
			std::cout	<< "Command not found try these commands" << std::endl\
						<< "ADD" <<std::endl \
						<< "SEARCH" <<std::endl \
						<< "EXIT" <<std::endl;
		}
	}
	return (0);
}
