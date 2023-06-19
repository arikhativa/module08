/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:55:51 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/19 17:09:35 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v(5);

	v[0] = 1;
	v[1] = 1;
	v[2] = 1;
	v[3] = 1;
	v[4] = 1;
	v[55];
	std::cout << v[222] << std::endl;
	// std::vector<int>::const_iterator it = std::find(v.begin(), v.end(), 7);

	// std::cout << *it << std::endl;
	return 0;
}