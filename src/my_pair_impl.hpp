#ifndef MY_PAIR_IMPL_HPP
#define MY_PAIR_IMPL_HPP

#include "my_pair.h"
template <typename T, typename U>
my::Pair<T, U>::Pair() : first(T()), second(U())
{
}

template <typename T, typename U>
my::Pair<T, U>::Pair(const T& val1, const U& val2) : first(val1), second(val2)
{
}

#endif // MY_PAIR_IMPL_HPP