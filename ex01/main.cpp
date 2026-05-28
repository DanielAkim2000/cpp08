#include "Span.hpp"
#include <list>

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "longest: " << sp.longestSpan() << std::endl;
	}

	{
		Span sp = Span(3);
		try
		{
			sp.addNumber(1);
			sp.addNumber(2);
			sp.addNumber(3);
			sp.addNumber(4);
		}
		catch (std::exception &e)
		{
			std::cout << "addNumber overflow exception: " << e.what() << std::endl;
		}
	}

	{
		Span sp = Span(3);
		try
		{
			sp.shortestSpan();
		}
		catch (std::exception &e)
		{
			std::cout << "empty shortestSpan exception: " << e.what() << std::endl;
		}
		sp.addNumber(42);
		try
		{
			sp.longestSpan();
		}
		catch (std::exception &e)
		{
			std::cout << "one element longestSpan exception: " << e.what() << std::endl;
		}
	}

	{
		Span sp = Span(10);
		std::vector<int> v;
		v.push_back(100);
		v.push_back(50);
		v.push_back(25);
		v.push_back(200);
		sp.addRange(v.begin(), v.end());
		std::cout << "range shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "range longest: " << sp.longestSpan() << std::endl;
	}

	{
		Span sp = Span(4);
		std::list<int> l;
		l.push_back(-10);
		l.push_back(0);
		l.push_back(10);
		l.push_back(20);
		sp.addRange(l.begin(), l.end());
		std::cout << "list shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "list longest: " << sp.longestSpan() << std::endl;
	}

	{
		Span sp = Span(5);
		std::vector<int> v;
		sp.addRange(v.begin(), v.end());
		sp.addNumber(-100);
		sp.addNumber(0);
		sp.addNumber(100);
		std::cout << "neg shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "neg longest: " << sp.longestSpan() << std::endl;
	}

	{
		Span sp = Span(2);
		std::vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		try
		{
			sp.addRange(v.begin(), v.end());
		}
		catch (std::exception &e)
		{
			std::cout << "addRange overflow exception: " << e.what() << std::endl;
		}
	}

	{
		Span sp = Span(10000);
		std::vector<int> big;
		big.reserve(10000);
		for (int i = 0; i < 10000; ++i)
			big.push_back(i * 2);
		sp.addRange(big.begin(), big.end());
		std::cout << "big shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "big longest: " << sp.longestSpan() << std::endl;
	}

	return 0;
}
