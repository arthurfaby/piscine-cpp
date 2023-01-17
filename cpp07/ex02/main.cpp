#include <iostream>
#include <cstdlib>
#include "Array.hpp"

template < typename T >
void	print_array(std::string name, Array< T > array, int size)
{
	int	i(0);

	std::cout << "Array [" << name << "] : {";
	while (i < size - 1)
	{
		std::cout << array[i] << ", ";
		i++;
	}
	std::cout << array[i] << "}" << std::endl;
}

int main(void)
{
	Array<int>	arr;
	Array<std::string> empty;
	Array<int>	ten(10);
	arr = ten;
	Array<int>	cpy(ten);

	arr[2] = 12;
	cpy[3] = 12;
	ten[4] = 12;
	print_array("arr", arr, arr.size());	
	print_array("cpy", cpy, cpy.size());	
	print_array("ten", ten, ten.size());	


	try {
		std::cout << empty[0];
	}
	catch (std::exception &e) {std::cerr << e.what() << std::endl;}
	try {
		std::cout << arr[123];
	}
	catch (std::exception &e) {std::cerr << e.what() << std::endl;}
	try {
		std::cout << ten[-2];
	}
	catch (std::exception &e) {std::cerr << e.what() << std::endl;}
	try {
		std::cout << cpy[-123876];
	}
	catch (std::exception &e) {std::cerr << e.what() << std::endl;}
}
