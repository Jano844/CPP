
#pragma once

#include <iostream>

class Data
{
private:
	std::string	name;
	int			birthyear;
public:
	Data();
	Data(std::string name, int birthyear);
	Data(Data const & other);
	~Data();
	Data& operator=(Data const & other);

	void	setName(std::string name);
	void	setBirthday(int birthyear);
	std::string	getName() const;
	int		getBirthyear() const;
};


