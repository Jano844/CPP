
#include "../include/MateriaSource.hpp"

// Initializes the array of MateriaSource
MateriaSource::MateriaSource()
{
	this->_materia_count = 0;
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

// calls the = operator to Copy the object
MateriaSource::MateriaSource(const MateriaSource & other)
{
	*this = other;
}

// Deletes all the materia in the array
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->_materias[i];
}

// Copies the object, deletes the previous materia and assigns the new ones
MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	this->_materia_count = other._materia_count;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		this->_materias[i] = other._materias[i];
	}
	return (*this);
}

// Adds new materia to the array
void MateriaSource::learnMateria(AMateria* materia)
{
	if (this->_materia_count < 4)
	{
		this->_materias[this->_materia_count] = materia;
		this->_materia_count++;
	}
	else
		std::cout << "MateriaSource is full" << std::endl;
}

// Returns copy of the materia, if it exists in the array of MateriaSource
AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_materia_count; i++)
	{
		if (this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	std::cout << type << " hasnt been learned yet or doesnt exist\n";
	return (NULL);
}