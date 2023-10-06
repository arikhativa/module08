#ifndef SPAN_HPP
#define SPAN_HPP

#include <climits>
#include <cmath>
#include <exception>
#include <iostream>
#include <set>
#include <stdexcept>

class Span
{
public:
  explicit Span (const unsigned int n);
  Span (Span const &src);
  ~Span ();

  Span &operator= (Span const &rhs);

  int shortestSpan (void) const;
  int longestSpan (void) const;
  void addNumber (int n);

  template <typename T>
  void
  addNumber (typename T::const_iterator begin, typename T::const_iterator end)
  {
    for (typename T::const_iterator it = begin; it != end; it++)
      addNumber (*it);
  }

  std::multiset<int> const &getSet (void) const;

private:
  unsigned int _max_size;
  std::multiset<int> _set;

  void _checkSize (void) const;
};

std::ostream &operator<< (std::ostream &o, Span const &i);

#endif /* ************************************************************ SPAN_H \
        */
