

#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const &other);
	virtual ~Ice();
	Ice &operator=(Ice const &other);

	AMateria* clone() const;
	void use(ICharacter& target);
};