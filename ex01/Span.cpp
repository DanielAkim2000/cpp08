#include "Span.hpp"

Span::Span() : _max(0), _data()
{
}

Span::Span(unsigned int N) : _max(N), _data()
{
	_data.reserve(N);
}

Span::Span(const Span &other) : _max(other._max), _data(other._data) {}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_max = other._max;
		_data = other._data;
	}
	return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (_data.size() >= _max)
	{
		throw std::runtime_error("Full");
	}
	_data.push_back(n);
}

int Span::shortestSpan() const
{
	if (_data.size() == 0)
		throw std::runtime_error("No data stored");
	if (_data.size() == 1)
		throw std::runtime_error("Just one data stored");

	std::vector<int> tmp(_data);
	std::sort(tmp.begin(), tmp.end());

	int sp = std::abs(tmp[1] - tmp[0]);
	for (std::vector<int>::const_iterator it = tmp.begin() + 2; it != tmp.end(); ++it)
	{
		long diff = std::abs(*it - *(it - 1));
		if (diff < sp)
			sp = diff;
	}
	return (sp);
}

int Span::longestSpan() const
{
	if (_data.size() == 0)
		throw std::runtime_error("No data stored");
	if (_data.size() == 1)
		throw std::runtime_error("Just one data stored");

	std::vector<int> tmp(_data);
	std::sort(tmp.begin(), tmp.end());

	return (std::abs(tmp.back() - tmp.front()));
}
