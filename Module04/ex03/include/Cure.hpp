

#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &other);
	virtual ~Cure();
	Cure &operator=(Cure const &other);

	AMateria* clone() const;
	void use(ICharacter& target);
};