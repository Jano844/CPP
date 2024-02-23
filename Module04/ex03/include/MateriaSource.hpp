

#pragma once

#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource & other);
	~MateriaSource();
	MateriaSource &operator=(MateriaSource const &other);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
private:
	AMateria* _materias[4];
	int _materia_count;
};