/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:41:48 by jsanger           #+#    #+#             */
/*   Updated: 2024/02/15 22:56:00 by jsanger          ###   ########.fr       */
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
	void	print_index(int i);
public:
	phonebook(void);
	~phonebook();
	static void signal_handler(int signal);
	void	add_contact(void);
	void	search_contact(void);
	void	exit_phonebook(void);
};

