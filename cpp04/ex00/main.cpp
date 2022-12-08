#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wa = new WrongCat();

	std::cout << j->getType() << " -> ";
	j->makeSound();
	
	std::cout << i->getType() << " -> ";
	i->makeSound();
	
	std::cout << meta->getType() << " -> ";
	meta->makeSound();
	
	std::cout << wa->getType() << " -> ";
	wa->makeSound();

	delete wa;
	delete i;
	delete j;
	delete meta;
	return 0;
}
