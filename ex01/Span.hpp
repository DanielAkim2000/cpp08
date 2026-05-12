#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include <stdexcept>
#include <cmath>
#include <algorithm>

class Span
{
private:
	unsigned int _max;
	std::vector<int> _data;

public:
	Span();
	Span(unsigned int N);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();

	void addNumber(int n);
	int shortestSpan() const;
	int longestSpan() const;
};

#endif
