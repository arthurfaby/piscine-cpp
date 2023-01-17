#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <cstdlib>

int	main( void )
{
	srand(time(NULL));
	// Animal	*animal = new Animal();
	// (void) animal;

	std::cout << std::endl << "\e[36m---------- CAT ----------\e[0m" << std::endl;
	{
		Cat		*cat = new Cat();
		Cat		*cat2 = new Cat();
		Cat		*cat_cpy = new Cat(*cat);
		Cat		*cat_assignment = new Cat();
	
		*cat_assignment = *cat_cpy;
	
		std::cout << "cat: " << cat->getType() << std::endl;
		std::cout << "--> ";
		cat->makeSound();
		std::cout << "Brain: ";
		cat->getBrain()->printIdeas();
		std::cout << std::endl;

		delete	cat;
	
		std::cout << "cat_cpy: " << cat_cpy->getType() << std::endl;
		std::cout << "--> ";
		cat_cpy->makeSound();
		std::cout << "Brain: ";
		cat_cpy->getBrain()->printIdeas();
		std::cout << std::endl;
	
		delete	cat_cpy;

		std::cout << "cat_assignment: " << cat_assignment->getType() << std::endl;
		std::cout << "--> ";
		cat_assignment->makeSound();
		std::cout << "Brain: ";
		cat_assignment->getBrain()->printIdeas();
		std::cout << std::endl;

		delete	cat_assignment;
	
		std::cout << "cat2: " << cat2->getType() << std::endl;
		std::cout << "--> ";
		cat2->makeSound();
		std::cout << "Brain: ";
		cat2->getBrain()->printIdeas();
		std::cout << std::endl;

		delete cat2;
	}

	std::cout << std::endl << "\e[36m---------- DOG ----------\e[0m" << std::endl;
	{
		Dog		*dog = new Dog();
		Dog		*dog2 = new Dog();
		Dog		*dog_cpy = new Dog(*dog);
		Dog		*dog_assignment = new Dog();
	
		*dog_assignment = *dog_cpy;
	
		std::cout << "dog: " << dog->getType() << std::endl;
		std::cout << "--> ";
		dog->makeSound();
		std::cout << "Brain: ";
		dog->getBrain()->printIdeas();
		std::cout << std::endl;

		delete	dog;
	
		std::cout << "dog_cpy: " << dog_cpy->getType() << std::endl;
		std::cout << "--> ";
		dog_cpy->makeSound();
		std::cout << "Brain: ";
		dog_cpy->getBrain()->printIdeas();
		std::cout << std::endl;

		delete	dog_cpy;
	
		std::cout << "dog_assignment: " << dog_assignment->getType() << std::endl;
		std::cout << "--> ";
		dog_assignment->makeSound();
		std::cout << "Brain: ";
		dog_assignment->getBrain()->printIdeas();
		std::cout << std::endl;
	
		delete	dog_assignment;

		std::cout << "dog2: " << dog2->getType() << std::endl;
		std::cout << "--> ";
		dog2->makeSound();
		std::cout << "Brain: ";
		dog2->getBrain()->printIdeas();
		std::cout << std::endl;
	
		delete	dog2;
	}


	std::cout << std::endl << "\e[36m---------- WRONG ANIMAL ----------\e[0m" << std::endl;
	{
		WrongCat		*wrongcat = new WrongCat();
		WrongAnimal	*wrongcat_cpy = new WrongCat(*wrongcat);
		WrongAnimal	*wrongcat_assignment = new WrongCat();
	
		*wrongcat_assignment = *wrongcat_cpy;
	
		std::cout << "wrongcat: " << wrongcat->getType() << std::endl;
		std::cout << "--> ";
		wrongcat->makeSound();

		delete	wrongcat;
	
		std::cout << "wrongcat_cpy: " << wrongcat_cpy->getType() << std::endl;
		std::cout << "--> ";
		wrongcat_cpy->makeSound();

		delete	wrongcat_cpy;
	
		std::cout << "wrongcat_assignment: " << wrongcat_assignment->getType() << std::endl;
		std::cout << "--> ";
		wrongcat_assignment->makeSound();
	
		delete	wrongcat_assignment;
	}

	std::cout << std::endl << "\e[36m---------- ARRAY ----------\e[0m" << std::endl;
	{
		Animal	*array[10];

		for (int i = 0; i < 5; i++)
			array[i] = new Cat();
		for (int i = 5; i < 10; i++)
			array[i] = new Dog();

		for (int i = 0; i < 10; i++)
		{
			std::cout << "---------- " << i << " ----------" << std::endl; 
			std::cout << "Type : " << array[i]->getType() << std::endl;
			std::cout << "Makesound : ";
			array[i]->makeSound();
			std::cout << "Brain : ";
			array[i]->getBrain()->printIdeas();
			std::cout << std::endl << std::endl;
			delete array[i];
		}
	}

	return 0;
}
