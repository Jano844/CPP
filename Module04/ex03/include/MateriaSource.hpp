

#pragma once

#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
	MateriaSource();
	MateriaSource(const MateriaSource & other);
	~MateriaSource();
	MateriaSource &operator=(MateriaSource const &other);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
}