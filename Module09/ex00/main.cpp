


#include "BitcoinExchange.hpp"

int check_input_file(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrog Input!" << std::endl;
		return 1;
	}
	std::ifstream infile(argv[1]);
	if(!infile.good()) {
		std::cout << "File not found!" << std::endl;
		return 1;
	}
	std::string line = static_cast<std::string>(argv[1]);
	if (line.substr(line.size() - 4) != ".csv")
	{
		std::cout << "Wrong file format!" << std::endl;
		return 1;
	}
	return 0;
}

int main(int argc, char **argv)
{
	if (check_input_file(argc, argv))
		return 1;
	btc btc;
	std::string file = static_cast<std::string>(argv[1]);
	btc.fill_database(file);
	btc.print_map();
	return 0;
}