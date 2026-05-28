#include "MutantStack.hpp"
#include <string>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size after pop: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "iter forward:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<int>::const_iterator cit = mstack.begin();
	MutantStack<int>::const_iterator cite = mstack.end();
	std::cout << "iter const:" << std::endl;
	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	std::cout << "iter reverse:" << std::endl;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	MutantStack<int> copy(mstack);
	copy.push(42);
	std::cout << "copy top: " << copy.top() << std::endl;

	MutantStack<int> assigned;
	assigned = mstack;
	std::cout << "assigned size: " << assigned.size() << std::endl;

	const MutantStack<int> &cref = mstack;
	MutantStack<int>::const_reverse_iterator crit = cref.rbegin();
	MutantStack<int>::const_reverse_iterator crite = cref.rend();
	std::cout << "iter const reverse:" << std::endl;
	while (crit != crite)
	{
		std::cout << *crit << std::endl;
		++crit;
	}

	MutantStack<std::string> sstack;
	sstack.push("alpha");
	sstack.push("beta");
	std::cout << "string top: " << sstack.top() << std::endl;

	std::stack<int> s(mstack);
	return (0);
}
