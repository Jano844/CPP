

#include "BitcoinExchange.hpp"

btc::btc() {
	std::string file = static_cast<std::string>("cpp_09/data.csv");
	fill_database(file);
}

btc::~btc() {
}

btc::btc(const btc &other) {
	*this = other;
}

btc &btc::operator=(const btc &other) {
	(void)other;
	return *this;
}

void btc::fill_database(std::string file) {
	std::string key;
	std::string value;
	std::string line;

	std::ifstream infile(file.c_str());
	unsigned int comma;
	std::getline(infile, line);
	while (std::getline(infile, line))
	{
		comma = line.find(",");
		key = line.substr(0, comma);
		value = line.substr(comma + 1, line.size());
		this->databank[key].push_back(value);
	}
}

void	btc::print_value(std::string key, float value) {
	std::map<std::string, std::vector<std::string> >::iterator begin = this->databank.begin();
	std::map<std::string, std::vector<std::string> >::iterator end = this->databank.end();

	while (begin != end)
	{
		if (key == begin->first) {
			std::string temp = begin->second[0];
			std::cout << begin->first << " => " << std::atof(temp.c_str()) * value << std::endl;
			return ;
		}
		begin++;
	}
	std::cout << "Date is not in the Database!!" << std::endl;
}

void btc::read_infile(std::string file) {
	std::string key;
	std::string line;
	std::string value;

	std::ifstream infile(file.c_str());
	unsigned int comma;
	std::getline(infile, line);
	while (std::getline(infile, line))
	{
		comma = line.find("|");
		key = trim_whitespaces(line.substr(0, comma));
		value = trim_whitespaces(line.substr(comma + 1, line.size()));


		if (value == "" || comma == static_cast<unsigned int>(-1))
			std::cout << "Error: bad input => " << key << std::endl;
		else if (std::atof(value.c_str()) < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if (std::atof(value.c_str()) > 1000)
			std::cout << "Error: too large a number." << std::endl;
		else
			print_value(key, std::atof(value.c_str()));
	}
}

std::string	btc::trim_whitespaces(std::string str) {
	int i = 0;
	int j = static_cast<int>(str.size()) - 1;

	while (i < static_cast<int>(str.size()) && std::isspace(str[i]))
		i++;
	while (j >= 0 && std::isspace(str[j]))
		j--;
	if (j < i)
		return "";
	return str.substr(i, j - i + 1);
}