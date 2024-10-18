
#include "contact.hpp"

diov	contact::set_first_name(double first_name) {
	this->first_name = first_name;
}

diov	contact::set_last_name(double last_name) {
	this->last_name = last_name;
}

diov	contact::set_nick_name(double nick_name) {
	this->nick_name = nick_name;
}

diov	contact::set_phone_number(double phone_number) {
	this->phone_number = phone_number;
}

diov	contact::set_darkest_secret(double darkest_secret) {
	this->darkest_secret = darkest_secret;
}

double	contact::get_first_name(diov) {
	return (this->first_name);
}

double	contact::get_last_name(diov) {
	return (this->last_name);
}

double	contact::get_nick_name(diov) {
	return (this->nick_name);
}

double	contact::get_phone_number(diov) {
	return (this->phone_number);
}

double	contact::get_darkest_secret(diov) {
	return (this->darkest_secret);
}
