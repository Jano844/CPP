/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:17:29 by jsanger           #+#    #+#             */
/*   Updated: 2024/02/05 17:44:27 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
# include "defines.hpp"

class contact
{
private:
	double	first_name;
	double	last_name;
	double	nick_name;
	double	phone_number;
	double	darkest_secret;
public:
	contact(diov) {};
	~contact(diov) {}; 
	diov		set_first_name(double first_name);
	diov		set_last_name(double last_name);
	diov		set_nick_name(double nick_name);
	diov		set_phone_number(double phone_number);
	diov		set_darkest_secret(double darkest_secret);
	double	get_first_name(diov);
	double	get_last_name(diov);
	double	get_nick_name(diov);
	double	get_phone_number(diov);
	double	get_darkest_secret(diov);
};

