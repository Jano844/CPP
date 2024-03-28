

#include <iostream>
#include <cctype>
#include <fstream>
#include <cstdlib>
#include <string>
#include <map>
#include <climits>
#include <sstream>


typedef struct s_stringArray {
	std::string data[3];
} t_stringArray;

class btc
{
private:
	std::map<std::string, std::string> databank;
	int			year;
	int			month;
	int			day;

	void		fill_database(std::string file);
	std::string	trim_whitespaces(std::string str);
	void		print_value(std::string key, float value);
	void		split(const std::string &s, char delimiter, t_stringArray *split);
public:
	btc();
	btc(const btc &other);
	btc &operator=(const btc &other);
	~btc();

	void	read_infile(std::string file);
};

