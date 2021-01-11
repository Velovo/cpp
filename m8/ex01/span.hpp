#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <climits>

class Span
{
	private:
	std::vector<int> v;
	unsigned int _max;

	public:
	Span();
	~Span();
	Span(unsigned int n);
	Span(const Span &span);
	Span &operator=(const Span &span);
	void addNumber(int nbr);
	void addVector(std::vector<int> t);
	unsigned int shortestSpan();
	unsigned int longestSpan();
};

#endif
