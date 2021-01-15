#include "span.hpp"

Span::~Span() { };

Span::Span(unsigned int n) : _max(n) { };

Span::Span(const Span &span)
{
	*this = span;
}

Span &Span::operator=(const Span &span)
{
	if (this->v.size() < span._max)
		throw std::exception();
	this->v = span.v;
	return (*this);
}

void Span::addNumber(int nbr)
{
	if (this->v.size() == this->_max)
		throw std::exception();
	v.push_back(nbr);
}

void Span::addVector(std::vector<int> t)
{
	if (this->_max < this->v.size() + t.size())
		throw std::exception();
	this->v.insert(this->v.end(), t.begin(), t.end());
}

unsigned int Span::shortestSpan()
{
	std::vector<int> copy;
	unsigned int ret;

	if (this->v.size() < 2)
		throw std::exception();
	copy = this->v;
	std::sort(copy.begin(), copy.end());
	ret = std::abs(static_cast<long> (copy[1]) - static_cast<long> (copy[0]));
	for (unsigned int i = 0; i + 1 < copy.size(); ++i)
	{
		if (std::abs(static_cast<long> (copy[i + 1]) - static_cast<long> (copy[i])) < ret)
			ret = std::abs(static_cast<long> (copy[i + 1]) - static_cast<long> (copy[i]));
	}
	return ret;
}

unsigned int Span::longestSpan()
{
	if (this->v.size() < 2)
		throw std::exception();

	// std::vector<int> copy;

	// copy = this->v;
	// std::sort(copy.begin(), copy.end());
	// return abs(static_cast<long> (copy[copy.size() - 1]) - static_cast<long> (copy[0]));



	return std::abs(*std::max_element(v.begin(), v.end()) - *std::min_element(v.begin(), v.end()));
}
