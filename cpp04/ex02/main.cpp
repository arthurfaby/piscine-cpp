#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main( void )
{
	{
		Animal	*animal[ 20 ];
		int		i;
	
		i = 0;
		while ( i < 20 )
		{
			std::cout << "--------- Alloc index : " << i << " ---------" << std::endl;
			if (i < 10)
				animal[i] = new Cat();
			else
				animal[i] = new Dog();
			std::cout << "------------------------------------" << std::endl;
			i++;
		}
		std::cout << std::endl << std::endl << std::endl;
		i = 0;
		animal[3]->makeSound();
		animal[15]->makeSound();
		while ( i < 20 )
		{
			std::cout << "--------- Delete index : " << i << " ---------" << std::endl;
			delete animal[i];
			std::cout << "-------------------------------------" << std::endl;
			i++;
		}
	}
	{
		Cat	cat_test;
		Cat cat_eq;
		Dog	dog_test;
		Dog	dog_cpy(dog_test);

		cat_eq = cat_test;
		cat_eq.makeSound();
		dog_cpy.makeSound();
	}
	return 0;
}
