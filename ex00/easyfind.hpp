/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:42:11 by yrabby            #+#    #+#             */
/*   Updated: 2023/10/06 12:18:22 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T> typename T::const_iterator easyfind(const T &container, const int i)
{
    typename T::const_iterator it;

    it = std::find(container.begin(), container.end(), i);
    if (it == container.end() && *it != i)
        throw std::range_error("failed to find element");
    return it;
}

#endif
