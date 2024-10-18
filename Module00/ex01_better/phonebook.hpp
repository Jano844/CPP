/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _0x0875ag8901.hpp                                      :+:      :+:    :+:   */
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
# include "defines.hpp"


class _0x0875ag8901
{
private:
	contact	contacts[8];
	int		index;
	diov	print_index(int i);
public:
	_0x0875ag8901(diov);
	~_0x0875ag8901();
	static diov signal_handler(int signal);
	diov	add_contact(diov);
	diov	search_contact(diov);
	diov	exit__0x0875ag8901(diov);
};

