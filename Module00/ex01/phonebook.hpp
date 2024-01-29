/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:41:48 by jsanger           #+#    #+#             */
/*   Updated: 2024/01/29 17:31:38 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
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
	void	add_contact(void);
	void	search_contact(void);
	void	print_index(int i);
	void	exit_phonebook(void);
};


#endif
