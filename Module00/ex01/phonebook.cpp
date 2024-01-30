#include "phonebook.hpp"

void	phonebook::add_contact() {
	std::string	str;

	if (this->index >= 8)
		this->index = 0;
	std::cout << "first name> ";
	std::cin >> str;
	this->contacts[this->index].set_first_name(str);

	std::cout << "last name> ";
	std::cin >> str;
	this->contacts[this->index].set_last_name(str);

	std::cout << "nick name> ";
	std::cin >> str;
	this->contacts[this->index].set_nick_name(str);

	std::cout << "phone number> ";
	std::cin >> str;
	this->contacts[this->index].set_phone_number(str);

	std::cout << "darkest secret> ";
	std::cin >> str;
	this->contacts[this->index].set_darkest_secret(str);

	this->index++;
}

void	phonebook::print_index(int i)
{
	contact &contact = this->contacts[i];

	std::string first_name;
	std::string last_name;
	std::string nick_name;
	unsigned int start_index = 0;
	int	slen_first = contact.get_first_name().length();
	int	slen_last= contact.get_last_name().length();
	int	slen_nick= contact.get_nick_name().length();
	int	first_done = 0;
	int	last_done = 0;
	int	nick_done = 0;
	while (slen_first > 0 || slen_last > 0 || slen_nick > 0)
	{
		if (slen_first == 10) {
			first_name = contact.get_first_name().substr(start_index, 10);
			slen_first = 0;
			first_done = 1;
		}
		else if (slen_first >= 9) {
			first_name = contact.get_first_name().substr(start_index, 9);
			first_name.append(".");
			slen_first -= 9;
		}
		else {
			slen_first = 0;
			if (start_index > contact.get_first_name().length() || first_done == 1)
				first_name = contact.get_first_name().substr(0, 0);
			else
				first_name = contact.get_first_name().substr(start_index, contact.get_first_name().length() - start_index);
		}

		if (slen_last == 10) {
			last_name = contact.get_last_name().substr(start_index, 10);
			slen_last = 0;
			last_done = 1;
		}
		else if (slen_last >= 9) {
			last_name = contact.get_last_name().substr(start_index, 9);
			last_name.append(".");
			slen_last -= 9;
		}
		else {
			slen_last = 0;
			if (start_index > contact.get_last_name().length() || last_done == 1)
				last_name = contact.get_last_name().substr(0, 0);
			else
				last_name = contact.get_last_name().substr(start_index, contact.get_last_name().length() - start_index);
		}

		if (slen_nick == 10) {
			nick_name = contact.get_nick_name().substr(start_index, 10);
			slen_nick = 0;
			nick_done = 1;
		}
		else if (slen_nick >= 9) {
			nick_name = contact.get_nick_name().substr(start_index, 9);
			nick_name.append(".");
			slen_nick -= 9;
		}
		else {
			slen_nick = 0;
			if (start_index > contact.get_nick_name().length() || nick_done == 1)
				nick_name = contact.get_nick_name().substr(0, 0);
			else
				nick_name = contact.get_nick_name().substr(start_index, contact.get_nick_name().length() - start_index);
		}
		std::cout << std::right << "|" << std::setw(10) << i + 1 \
							<< "|" << std::setw(10) << first_name \
							<< "|" << std::setw(10) << last_name \
							<< "|" << std::setw(10) << nick_name \
							<< "|" << std::endl;
		start_index += 9;
	}
}

void	phonebook::search_contact() {
	int	i = -1;

	while (i < 0 || i > 8)
	{
		std::cout << "Enter 1 - 8 to see that contact or 0 to see all" << std::endl << "> ";
		std::cin >> i;
	}
	std::cout << std::right << "|" << std::setw(10) << "index" \
							<< "|" << std::setw(10) << "first name" \
							<< "|" << std::setw(10) << "last name" \
							<< "|" << std::setw(10) << "nick name" \
							<< "|" << std::endl;

	if (i != 0)
		print_index(i - 1);
	else
	{
		while (i < 8)
		{
			print_index(i);
			i++;
		}
	}
}

void	phonebook::exit_phonebook() {
	return ;
}
