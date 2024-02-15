#include "phonebook.hpp"

phonebook::phonebook(void) {
	std::cout << "create a Phonebook for up to 8 contacts" << std::endl;
	this->index = 0;
};

phonebook::~phonebook() {
	std::cout << "Phonebook destroyed" << std::endl;
};

void phonebook::signal_handler(int signal) {
	if (signal == SIGINT) {
		std::cout << std::endl << "Signal received: Exiting phonebook" << std::endl;
		exit(0);
	}
};

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

	std::string first_name = contact.get_first_name();
	std::string last_name = contact.get_last_name();
	std::string nick_name = contact.get_nick_name();

	if (first_name.length() > 10) {
		first_name.resize(9);
		first_name += ".";
	} else
		first_name.resize(first_name.length());
	//---------------------
	if (last_name.length() > 10) {
		last_name.resize(9);
		last_name += ".";
	} else
		last_name.resize(last_name.length());
	//---------------------
	if (nick_name.length() > 10) {
		nick_name.resize(9);
		nick_name += ".";
	} else
		nick_name.resize(nick_name.length());



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
