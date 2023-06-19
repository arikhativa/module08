/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:42:17 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/19 16:55:07 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include "easyfind.hpp"

template <typename T>
typename T::const_iterator	easyfind(const T &container, const int i)
{
	T::const_iterator it;

	it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw std::exception();
	return (it);
}


#endif /* ****************************************************** EASYFIND_TPP */