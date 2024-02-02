
#pragma once

#include <iostream>
#include <cstring>

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Harl(void);
	~Harl(void);
	void	harlfilter(std::string str);
	void	complain( std::string level );
};
