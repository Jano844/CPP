

#include <iostream>
#include <cctype>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include <climits>

class btc
{
private:
	std::map<std::string, std::vector<std::string> > databank;
	void		fill_database(std::string file);
	std::string	trim_whitespaces(std::string str);
	void	print_value(std::string key, float value);
public:
	btc();
	btc(const btc &other);
	btc &operator=(const btc &other);
	~btc();

	void	read_infile(std::string file);
};