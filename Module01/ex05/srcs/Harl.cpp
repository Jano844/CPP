
#include "../include/Harl.hpp"

Harl::Harl(void) {
	std::cout << "Harl starts complaining" << std::endl;
}

Harl::~Harl(void) {
	std::cout << "Harl stops complaining" << std::endl;
}


void	Harl::debug(void) {
	std::cout	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
				<< std::endl;
}
void	Harl::info(void) {
	std::cout	<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." \
				<< std::endl;
}
void	Harl::warning(void) {
	std::cout	<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." \
				<< std::endl;
}
void	Harl::error(void) {
	std::cout	<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*pointer[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i  = 0; i < 4; i++)
	{
		if (level == arr[i])
			(this->*pointer[i])();
	}
}