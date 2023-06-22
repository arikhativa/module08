#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int n) 
	:	_max_size(n)
{
	_set.clear();
}

// TODO test this
Span::Span( const Span & src )
	:	_max_size(src._max_size),
		_set(src._set)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	_max_size = 0;
	_set.clear();
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// TODO test this
Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		_max_size = rhs._max_size;
		_set = rhs._set;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	o << "set size: " << i.getSet().size() << " [";
	for (std::multiset<int>::const_iterator it = i.getSet().begin(); it != i.getSet().end(); it++)
	{
		o << *it;
		if (it != --i.getSet().end())
			o << ", ";
	}
	o << "]" << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int n)
{
	if (_set.size() == _max_size)
	{
		std::cout << "_set.size(): " << _set.size()<< std::endl;
		std::cout << "_max_size: " << _max_size<< std::endl;
		throw std::out_of_range("Not enough space");
	}
	_set.insert(n);
}

int		Span::shortestSpan(void) const
{
	_checkSize();

	int min = INT_MAX;
	for (std::multiset<int>::const_iterator it = _set.begin(); it != _set.end(); it++)
	{
		std::multiset<int>::const_iterator it2 = it;
		it2++;
		if (it2 != _set.end())
		{
			int diff = std::abs(*it - *it2);
			if (diff < min)
				min = diff;
		}
	}
	return min;
}

int		Span::longestSpan(void) const
{
	_checkSize();

	return (*(--_set.end()) - *_set.begin());
}

void	Span::_checkSize(void) const
{
	if (_set.size() < 2)
		throw std::length_error("Not enough elements");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::multiset<int> const &	Span::getSet(void) const
{
	return _set;
}


/* ************************************************************************** */