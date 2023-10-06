/* **************************************************************************
 */
/*                                                                            */
/*                                                        :::      :::::::: */
/*   main.cpp                                           :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+ */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+ */
/*                                                +#+#+#+#+#+   +#+ */
/*   Created: 2023/06/19 16:55:51 by yrabby            #+#    #+# */
/*   Updated: 2023/10/06 12:23:19 by yrabby           ###   ########.fr */
/*                                                                            */
/* **************************************************************************
 */

#include <iostream>
#include <list>
#include <vector>

#include "easyfind.hpp"

int
main (void)
{
  {
    std::vector<int> v (5);
    v[0] = 1;
    v[1] = 2;
    v[2] = 2;
    v[3] = 4;
    v[4] = 5;

    try
      {
        std::vector<int>::const_iterator it = easyfind (v, 2);
        std::cout << *it << std::endl;
      }
    catch (const std::exception &e)
      {
        std::cerr << e.what () << std::endl;
      }
    try
      {
        std::vector<int>::const_iterator it = easyfind (v, 7);
        std::cout << *it << std::endl;
      }
    catch (const std::exception &e)
      {
        std::cerr << e.what () << std::endl;
      }
  }
  {
    std::list<int> container;
    container.push_back (1);
    container.push_back (2);
    container.push_back (3);
    container.push_back (4);

    try
      {
        std::list<int>::const_iterator it = ::easyfind (container, 4);
        std::cout << *it << std::endl;
      }
    catch (const std::exception &e)
      {
        std::cerr << e.what () << std::endl;
      }
    try
      {
        std::list<int>::const_iterator it = ::easyfind (container, 7);
        std::cout << *it << std::endl;
      }
    catch (const std::exception &e)
      {
        std::cerr << e.what () << std::endl;
      }
  }
  return 0;
}
