

#include "BitcoinExchange.hpp"

btc::btc() {
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

	std::ifstream infile(file);
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

void	btc::print_map() {
	std::map<std::string, std::vector<std::string>>::iterator begin = this->databank.begin();
	std::map<std::string, std::vector<std::string>>::iterator end = this->databank.end();

	while (begin != end)
	{
		std::cout << "Key: " << begin->first << ", Values: " << begin->second[0] << std::endl;
		begin++;
	}
}

