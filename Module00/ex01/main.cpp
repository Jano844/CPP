#include "phonebook.hpp"

int	main(void)
{
	phonebook	phonebook;
	std::string	command;

	while (1)
	{
		std::cout	<< "Enter a command: ";
		std::cin	>> command;
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
		{
			phonebook.exit_phonebook();
			return 0;
		}
		else {
			std::cout	<< "Command not found try these commands" << std::endl\
						<< "ADD" <<std::endl \
						<< "SEARCH" <<std::endl \
						<< "PRINT" <<std::endl \
						<< "EXIT" <<std::endl;
		}
	}
	return (0);
}
