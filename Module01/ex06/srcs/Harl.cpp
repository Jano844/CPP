
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
	std::cout	<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" \
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

void	Harl::harlfilter(std::string str)
{
	int num = 5;
	std::string switches[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) {
		if (str == switches[i]) {
			num = i;
			break ;
		}
	}
	switch (num)
	{
		case 0:
			complain("DEBUG");
		case 1:
			complain("INFO");
		case 2:
			complain("WARNING");
		case 3:
			complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}



// if someone wont accept the follow trough of the switch case
// void	Harl::harlfilter(std::string str)
// {
// 	int num = 5;
// 	std::string switches[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
// 	for (int i = 0; i < 4; i++) {
// 		if (str == switches[i]) {
// 			num = i;
// 			break ;
// 		}
// 	}
// 	switch (num)
// 	{
// 		case 0:
// 			complain("DEBUG");
// 			complain("INFO");
// 			complain("WARNING");
// 			complain("ERROR");
// 			break;
// 		case 1:
// 			complain("INFO");
// 			complain("WARNING");
// 			complain("ERROR");
// 			break;
// 		case 2:
// 			complain("WARNING");
// 			complain("ERROR");
// 			break;
// 		case 3:
// 			complain("ERROR");
// 			break;
// 		default:
// 			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
// 	}
// }