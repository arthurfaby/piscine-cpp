#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main( void )
{

	std::cout << std::endl << "\e[36m---------- ANIMAL ----------\e[0m" << std::endl;
	{
		Animal		*animal = new Animal();
		Animal	*animal_cpy = new Animal(*animal);
		Animal	*animal_assignment;
	
		animal_assignment = animal_cpy;
	
		std::cout << "animal: " << animal->getType() << std::endl;
		std::cout << "--> ";
		animal->makeSound();

		delete	animal;
	
		std::cout << "animal_cpy: " << animal_cpy->getType() << std::endl;
		std::cout << "--> ";
		animal_cpy->makeSound();
	
		std::cout << "animal_assignment: " << animal_assignment->getType() << std::endl;
		std::cout << "--> ";
		animal_assignment->makeSound();
	
		delete	animal_cpy;
	}

	std::cout << std::endl << "\e[36m---------- CAT ----------\e[0m" << std::endl;
	{
		Cat		*cat = new Cat();
		Animal	*cat_cpy = new Cat(*cat);
		Animal	*cat_assignment;
	
		cat_assignment = cat_cpy;
	
		std::cout << "cat: " << cat->getType() << std::endl;
		std::cout << "--> ";
		cat->makeSound();

		delete	cat;
	
		std::cout << "cat_cpy: " << cat_cpy->getType() << std::endl;
		std::cout << "--> ";
		cat_cpy->makeSound();
	
		std::cout << "cat_assignment: " << cat_assignment->getType() << std::endl;
		std::cout << "--> ";
		cat_assignment->makeSound();
	
		delete	cat_cpy;
	}

	std::cout << std::endl << "\e[36m---------- DOG ----------\e[0m" << std::endl;
	{
		Dog		*dog = new Dog();
		Animal	*dog_cpy = new Dog(*dog);
		Animal	*dog_assignment;
	
		dog_assignment = dog_cpy;
	
		std::cout << "dog: " << dog->getType() << std::endl;
		std::cout << "--> ";
		dog->makeSound();
	
		delete	dog;

		std::cout << "dog_cpy: " << dog_cpy->getType() << std::endl;
		std::cout << "--> ";
		dog_cpy->makeSound();
	
		std::cout << "dog_assignment: " << dog_assignment->getType() << std::endl;
		std::cout << "--> ";
		dog_assignment->makeSound();
	
		delete	dog_cpy;
	}

	std::cout << std::endl << "\e[36m---------- WRONG ANIMAL ----------\e[0m" << std::endl;
	{
		WrongCat		*wrongcat = new WrongCat();
		WrongAnimal	*wrongcat_cpy = new WrongCat(*wrongcat);
		WrongAnimal	*wrongcat_assignment;
	
		wrongcat_assignment = wrongcat_cpy;
	
		std::cout << "wrongcat: " << wrongcat->getType() << std::endl;
		std::cout << "--> ";
		wrongcat->makeSound();

		delete	wrongcat;
	
		std::cout << "wrongcat_cpy: " << wrongcat_cpy->getType() << std::endl;
		std::cout << "--> ";
		wrongcat_cpy->makeSound();
	
		std::cout << "wrongcat_assignment: " << wrongcat_assignment->getType() << std::endl;
		std::cout << "--> ";
		wrongcat_assignment->makeSound();
	
		delete	wrongcat_cpy;
	}


	return 0;
}
