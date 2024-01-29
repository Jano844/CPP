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
	std::cout	<< "index " << i + 1 << '\t'
				<< this->contacts[i].get_first_name() << '\t'
				<< this->contacts[i].get_last_name() << '\t'
				<< this->contacts[i].get_nick_name() << '\t'
				<< this->contacts[i].get_phone_number() << '\t'
				<< this->contacts[i].get_darkest_secret() << '\t' << std::endl;
}

void	phonebook::search_contact() {
	int	i = -1;

	while (i < 0 || i > 8)
	{
		std::cout << "Enter 1 - 8 to see that contact or 0 to see all" << std::endl << "> ";
		std::cin >> i;
	}
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
