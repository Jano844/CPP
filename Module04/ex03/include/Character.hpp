

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter
{
private:
	std::string _name;
	AMateria* _materias[4];
	int _materia_count;
public:
	Character();
	Character(std::string const &name);
	Character(Character const &other);
	virtual ~Character();
	Character &operator=(Character const &other);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};