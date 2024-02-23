

#include "../include/Character.hpp"

// default Constructor initializes the inventory to NULL and the materia count to 0
Character::Character()
{
	this->_name = "Nameless";
	this->_materia_count = 0;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

Character::Character(std::string const &name)
{
	this->_name = name;
	this->_materia_count = 0;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

// Copy constructor uses the = operator to copy the object
Character::Character(Character const &other)
{
	*this = other;
}

// Destructor deletes all the materia in the inventory
Character::~Character()
{
	for (int i = 0; i < _materia_count; i++)
		delete this->_materias[i];
}

// Copies the object, deletes the previous materia and assigns the new ones and assigns the name
Character &Character::operator=(Character const &other)
{
	this->_name = other._name;
	this->_materia_count = other._materia_count;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		this->_materias[i] = other._materias[i];
	}
	return *this;
}
// getter
std::string const &Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	// std::cout << this->_materia_count << std::endl;
	// if (!m)
	// 	std::cout << "no m\n";
	// else
	// 	std::cout << "m\n";
	// if (!m || this->_materia_count >= 4) {
	
	if (!m || this->_materia_count >= 4) {
		std::cout << "Materia doesnt exist or inventory of " << this->_name << " is full\n";
		return ;
	}
	this->_materias[this->_materia_count] = m;
	// if (!this->_materias[this->_materia_count])
	// 	std::cout << "wrong Input\n";
	this->_materia_count++;
}

void	Character::unequip(int idx)
{
	if (idx > this->_materia_count && idx >= 0) {
		std::cout << this->_name << " doesnt have a Materia[" << idx << "]\n";
		return ;
	}
	this->_materias[idx] = NULL;
	idx++;
	while (idx < 4) {
		this->_materias[idx - 1] = this->_materias[idx];
		idx++;
	}
	this->_materia_count--;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > this->_materia_count && idx < 0) {
		std::cout << this->_name << " doesnt have a Materia[" << idx << "]\n";
		return ;
	}
	if (this->_materias[idx]) {
		std::cout << "* " << this->_name;
		this->_materias[idx]->use(target);
	}
	else {
		std::cout << "* " << this->_name;
		std::cout << " tries to use not existing Materia\n";
	}
}

