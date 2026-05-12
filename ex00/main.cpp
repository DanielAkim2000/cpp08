#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	std::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);

	try
	{
		std::vector<int>::iterator it1 = easyfind(v, 20);
		std::cout << "Found in vector: " << *it1 << std::endl;

		std::list<int>::iterator it2 = easyfind(l, 2);
		std::cout << "Found in list: " << *it2 << std::endl;

		easyfind(v, 99); // doit throw
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
