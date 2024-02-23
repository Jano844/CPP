
#pragma once	

#include <iostream>

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria(std::string const &type);
	virtual ~AMateria();

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
	
	std::string const &getType() const;
};