
#pragma once

#include <iostream>

class Data
{
private:
	void *ptr;
	unsigned int raw;
public:
	Data();
	Data(void *ptr, unsigned int raw);
	Data(Data const & other);
	~Data();
	Data& operator=(Data const & other);
};


