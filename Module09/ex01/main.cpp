

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Wrong number of arguments\n";
		return 1;
	}
	RPN rpn;
	rpn.check_input(static_cast<std::string>(argv[1]));
	rpn.make_list(static_cast<std::string>(argv[1]));
	rpn.calculation_loop();
	// rpn.fill_first();
	// rpn.calc_first();
	// rpn.print_list();
	// rpn.clear_list();
	return 0;
}