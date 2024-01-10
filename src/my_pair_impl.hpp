#ifndef MY_PAIR_IMPL_HPP
#define MY_PAIR_IMPL_HPP

template <typename T, typename U>
my::Pair<T, U>::Pair() : first(T()), second(U())
{
}

template <typename T, typename U>
my::Pair<T, U>::Pair(const T& val1, const U& val2) : first(val1), second(val2)
{
}

template <typename T, typename U>
my::Pair<T, U> my::make_pair(const T& firs_val, const U& second_val)
{
    return my::Pair<T, U>(firs_val, second_val);
}

#endif // MY_PAIR_IMPL_HPP