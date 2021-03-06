/*!
@file

@copyright Edouard Alligand and Joel Falcou 2015-2017
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
#ifndef BOOST_BRIGAND_TYPES_TYPE_HPP
#define BOOST_BRIGAND_TYPES_TYPE_HPP

namespace brigand
{
  template<typename T> struct type_ { using type = T; };

  template<typename T> using type_from = typename T::type;
}
#endif
