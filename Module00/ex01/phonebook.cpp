#include "phonebook.hpp"

void	phonebook::add_contact() {
	std::string	str;

	if (this->index >= 8)
		this->index = 0;
	std::cout << "first name> ";
	std::cin >> str;
	if (std::cin.eof())
		exit(1);
	this->contacts[this->index].set_first_name(str);

	std::cout << "last name> ";
	std::cin >> str;
	if (std::cin.eof())
		exit(1);
	this->contacts[this->index].set_last_name(str);

	std::cout << "nick name> ";
	std::cin >> str;
	if (std::cin.eof())
		exit(1);
	this->contacts[this->index].set_nick_name(str);

	std::cout << "phone number> ";
	std::cin >> str;
	if (std::cin.eof())
		exit(1);
	this->contacts[this->index].set_phone_number(str);

	std::cout << "darkest secret> ";
	std::cin >> str;
	if (std::cin.eof())
		exit(1);
	this->contacts[this->index].set_darkest_secret(str);

	this->index++;
}

void	phonebook::print_index(int i)
{
	contact &contact = this->contacts[i];

	std::string first_name;
	std::string last_name;
	std::string nick_name;

	int slen_first = contact.get_first_name().length();
	int slen_last = contact.get_last_name().length();
	int slen_nick = contact.get_nick_name().length();


	// firstname
	if (slen_first == 10) {
		first_name = contact.get_first_name().substr(0, 10);
	}
	else if (slen_first >= 10) {
		first_name = contact.get_first_name().substr(0, 9) + ".";
	}
	else {
		first_name = contact.get_first_name().substr(0, slen_first);
	}
	// -----------------------------

	// lastname
	if (slen_last == 10) {
		last_name = contact.get_last_name().substr(0, 10);
	}
	else if (slen_last >= 10) {
		last_name = contact.get_last_name().substr(0, 9) + ".";
	}
	else {
		last_name = contact.get_last_name().substr(0, slen_last);
	}
	// -----------------------------

	// nickname
	if (slen_nick == 10) {
		nick_name = contact.get_nick_name().substr(0, 10);
	}
	else if (slen_nick >= 10) {
		nick_name = contact.get_nick_name().substr(0, 9) + ".";
	}
	else {
		nick_name = contact.get_nick_name().substr(0, slen_nick);
	}
	// -----------------------------


	//printing phonebook
	std::cout << std::right << "|" << std::setw(10) << i + 1 \
						<< "|" << std::setw(10) << first_name \
						<< "|" << std::setw(10) << last_name \
						<< "|" << std::setw(10) << nick_name \
						<< "|" << std::endl;
}

void	phonebook::search_contact() {
	int	input = -1;
	std::string input_str;

	while ((input > 8 || input < 1))
	{
		std::cout << "Enter number between 1-8 or Enter ALL to see all contacts" << std::endl;
		std::cin >> input_str;
		input = std::atoi(input_str.c_str());
		if (std::cin.eof())
			exit(1);
		if (input_str == "ALL")
		{
			input = 0;
			break ;
		}
	}

	std::cout << std::right << "|" << std::setw(10) << "index" \
							<< "|" << std::setw(10) << "first name" \
							<< "|" << std::setw(10) << "last name" \
							<< "|" << std::setw(10) << "nick name" \
							<< "|" << std::endl;

	if (input != 0)
		print_index(input - 1);
	if (input == 0)
	{
		while (input < 8)
		{
			print_index(input);
			input++;
		}
	}
}

void	phonebook::exit_phonebook() {
	return ;
}
