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
	unsigned int _size;

public:
	Span();
	Span(unsigned int N);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();

	void addNumber(int n);
	int shortestSpan() const;
	int longestSpan() const;

	template <typename Iterator>
	void addRange(Iterator begin, Iterator end)
	{
		typename std::iterator_traits<Iterator>::difference_type count = std::distance(begin, end);
		if (count < 0 || _size + static_cast<unsigned int>(count) > _max)
			throw std::runtime_error("Error lors de l execution max size atteint");
		_data.insert(_data.end(), begin, end);
		_size = static_cast<unsigned int>(_data.size());
	}
};

#endif
