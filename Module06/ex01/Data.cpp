
#include "Data.hpp"

Data::Data() : name("name"), birthyear(2000){
}

Data::Data(std::string _name, int year) : name(_name), birthyear(year) {
}

Data::Data(Data const & other) : name(other.name), birthyear(other.birthyear){
}

Data::~Data() {
}

Data& Data::operator=(Data const & other) {
	this->name = other.name;
	this->birthyear = other.birthyear;
	return *this;
}

void	Data::setName(std::string name) {
	this->name = name;
}

void	Data::setBirthday(int birthyear) {
	this->birthyear = birthyear;
}

std::string	Data::getName() const {
	return this->name;
}

int	Data::getBirthyear() const {
	return this->birthyear;
}