

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/wrongAnimal.hpp"
#include "../include/wrongCat.hpp"
#include "../include/Brain.hpp"

// int main() {
// 	const Animal* animal = new Animal();
// 	const Animal* cat = new Cat();
// 	const Animal* dog = new Dog();

// 	std::cout << cat->getType() << " makes this sound:" << std::endl;
// 	cat->makeSound();
// 	std::cout << dog->getType() << " makes this sound:" << std::endl;
// 	dog->makeSound();
// 	std::cout << animal->getType() << " makes this sound:" << std::endl;
// 	animal->makeSound();

// 	animal->test();
// 	cat->test();

// 	delete animal;
// 	delete cat;
// 	delete dog;

// 	std::cout << "\n---------------------\n" << std::endl;
// 	const wrongAnimal* wrong_animal = new wrongAnimal();
// 	const wrongAnimal* wrong_cat = new wrongCat();

// 	wrong_cat->makeSound();
// 	wrong_animal->makeSound();
// 	wrong_cat->test();

// 	delete wrong_animal;
// 	delete wrong_cat;

// 	return 0;
// }

int	main()
{
	const Animal* cat = new Cat();


	std::cout << cat->getType() << std::endl;
	cat->makeSound();
	cat->set_ideas(0, 50, "HelloWorld");
	cat->printIdears();
	delete cat;

	std::cout << "\n---------------------\n" << std::endl;

	Dog basic;
	Dog tmp = basic;
	basic.makeSound();
	basic.set_ideas(0, 50, "HelloWorld");
	basic.printIdears();
	tmp.makeSound();
	tmp.printIdears();
	return 0;

}
