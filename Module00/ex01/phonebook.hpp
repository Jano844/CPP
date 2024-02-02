/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:41:48 by jsanger           #+#    #+#             */
/*   Updated: 2024/02/02 16:49:44 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <csignal>
# include "contact.hpp"


class phonebook
{
private:
	contact	contacts[8];
	int		index;
public:
	phonebook(void) {
		std::cout << "create a Phonebook for up to 8 contacts" << std::endl;
		this->index = 0;
	};
	~phonebook() {
		std::cout << "Phonebook destroyed" << std::endl;
	};
	static void signal_handler(int signal) {
		if (signal == SIGINT) {
			std::cout << std::endl << "Signal received: Exiting phonebook" << std::endl;
			exit(0);
		}
	};
	void	add_contact(void);
	void	search_contact(void);
	void	print_index(int i);
	void	exit_phonebook(void);
};

