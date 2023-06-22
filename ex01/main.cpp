/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:55:51 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/22 16:18:44 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>

#include "Span.hpp"


int main(void)
{
	{
		Span sp = Span(5);
		sp.addNumber(1);
		sp.addNumber(1);
		sp.addNumber(3);
		sp.addNumber(6);
		sp.addNumber(100);
		std::cout << "simple set: "  << std::endl;
		std::cout <<  sp << std::endl;

		std::cout << "short: " << sp.shortestSpan() << std::endl;
		std::cout << "long: " << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(2);
		sp.addNumber(10);
		sp.addNumber(-50);
		std::cout << std::endl << " ------ "  << std::endl << std::endl;
		std::cout << "simple set: "  << std::endl;
		std::cout <<  sp << std::endl;

		std::cout << "short: " << sp.shortestSpan() << std::endl;
		std::cout << "long: " << sp.longestSpan() << std::endl;
	}
	{
		std::vector<int> vec(10000);
		for (int i = 0; i < 10000; i++)
			vec[i] = i;

		Span sp = Span(10000);
		sp.addNumber<std::vector<int> >(vec.begin(), vec.begin() + 10000);

		std::cout << std::endl << " ------ "  << std::endl << std::endl;
		std::cout << "complex set[10000]: "  << std::endl;
		std::cout <<  sp << std::endl;

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
	}
	{
		std::list<int> l;
		for (int i = 0; i < 400; i++)
			l.push_back(i);

		l.pop_front();
		l.push_front(-60);
		l.pop_back();
		l.pop_back();
		l.pop_back();
		l.pop_back();
		l.push_back(-1);
		l.push_back(500000);
		l.push_back(-100);
		l.push_back(22);
		Span sp = Span(400);
		sp.addNumber<std::list<int> >(l.begin(), l.end());

		std::cout << std::endl << " ------ "  << std::endl << std::endl;
		std::cout << "complex set[400]: "  << std::endl;
		std::cout <<  sp << std::endl;

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
	}
	return 0;
}