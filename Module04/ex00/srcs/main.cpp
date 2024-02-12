

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/wrongAnimal.hpp"
#include "../include/wrongCat.hpp"

int main() {
	const Animal* animal = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();

	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	animal->test();
	cat->test();

	delete animal;
	delete cat;
	delete dog;

	std::cout << "\n---------------------\n" << std::endl;
	const wrongAnimal* wrong_animal = new wrongAnimal();
	const wrongAnimal* wrong_cat = new wrongCat();

	wrong_cat->makeSound();
	wrong_animal->makeSound();
	wrong_cat->test();

	delete wrong_animal;
	delete wrong_cat;

	return 0;
}
