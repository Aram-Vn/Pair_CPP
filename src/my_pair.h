#ifndef MY_PAIR_H
#define MY_PAIR_H

#include <iostream>

namespace my {

    template <typename T, typename U>
    struct Pair
    {
    public:
        Pair();
        ~Pair() = default;
        Pair(const T& val1, const U& val2);
        
    public:
        T first;
        U second;
    };    
} // namespace my

#include "my_pair_impl.hpp"

#endif // MY_PAIR_H