

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>

class btc
{
private:
	std::map<std::string, std::vector<std::string>> databank;
public:
	btc();
	btc(const btc &other);
	btc &operator=(const btc &other);
	~btc();

	void	fill_database(std::string file);
	void	print_map();
};