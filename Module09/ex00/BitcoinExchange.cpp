

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

std::vector<std::string> btc::split(const std::string &s, char delimiter)
{
	std::vector<std::string> split;
	std::stringstream stream(s);
	std::string part;
	
	while (std::getline(stream, part, delimiter))
		split.push_back(part);
	return split;
}

void	btc::print_value(std::string key, float value) {
	std::map<std::string, std::vector<std::string> >::iterator begin = this->databank.begin();
	std::map<std::string, std::vector<std::string> >::iterator end = this->databank.end();

	std::vector<std::string> vec = split(key, '-');
	this->year = std::atoi(vec[0].c_str());
	this->month = std::atoi(vec[1].c_str());
	this->day = std::atoi(vec[2].c_str());

	if (this->year > 2022 || (this->year == 2022 && this->month > 3)
		|| (this->year == 2022 && this->month == 3 && this->day > 29)) {
		std::cout << "No Data yet\n";
		return ;
	}
	std::string temp = begin->first;
	std::vector<std::string> data = split(temp, '-');
	int data_year = std::atoi(data[0].c_str());
	int data_month = std::atoi(data[1].c_str());
	int data_day = std::atoi(data[2].c_str());
	if (this->year < data_year || (this->year == data_year && this->month < data_month)
		|| (this->year == data_year && this->month == data_month && this->day < data_day)) {
		std::cout << "No Data yet\n";
		return ;
	}
	while (data_year < this->year)
	{
		begin++;
		temp = begin->first;
		data = split(temp, '-');
		data_year = std::atoi(data[0].c_str());
		data_month = std::atoi(data[1].c_str());
		data_day = std::atoi(data[2].c_str());
	}
	while (data_month < this->month) {
		begin++;
		temp = begin->first;
		data = split(temp, '-');
		data_year = std::atoi(data[0].c_str());
		data_month = std::atoi(data[1].c_str());
		data_day = std::atoi(data[2].c_str());
		if (data_year > this->year) {
			begin--;
			break ;
		}
	}
	while (data_day < this->day) {
		begin++;
		temp = begin->first;
		data = split(temp, '-');
		data_year = std::atoi(data[0].c_str());
		data_month = std::atoi(data[1].c_str());
		data_day = std::atoi(data[2].c_str());
		if (data_year > this->year || data_month > this->month ) {
			begin--;
			break ;
		}
		// std::cout << data_day << " " << this->day << std::endl;
	}
	if (key != begin->first)
		begin--;
	std::string tmp = begin->second[0];
	std::cout << key << " => " << value << " = " << value * std::atof(tmp.c_str())<< std::endl;
}