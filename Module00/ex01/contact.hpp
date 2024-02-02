/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:17:29 by jsanger           #+#    #+#             */
/*   Updated: 2024/02/02 16:49:38 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	contact(void) {};
	~contact(void) {};
	void		set_first_name(std::string first_name);
	void		set_last_name(std::string last_name);
	void		set_nick_name(std::string nick_name);
	void		set_phone_number(std::string phone_number);
	void		set_darkest_secret(std::string darkest_secret);
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nick_name(void);
	std::string	get_phone_number(void);
	std::string	get_darkest_secret(void);
};

