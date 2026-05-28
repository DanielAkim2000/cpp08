#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);

	std::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);

	std::deque<int> d;
	d.push_back(-5);
	d.push_back(0);
	d.push_back(5);

	try
	{
		std::vector<int>::iterator it1 = easyfind(v, 20);
		std::cout << "Found in vector: " << *it1 << std::endl;

		std::list<int>::iterator it2 = easyfind(l, 2);
		std::cout << "Found in list: " << *it2 << std::endl;

		std::deque<int>::iterator it3 = easyfind(d, -5);
		std::cout << "Found in deque: " << *it3 << std::endl;

		const std::vector<int> cv(v);
		std::vector<int>::const_iterator it4 = easyfind(cv, 30);
		std::cout << "Found in const vector: " << *it4 << std::endl;

		easyfind(v, 99);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
