#ifndef __RANK_H__
#define __RANK_H__
#include "stddef.h"
template<class T>
struct rank {
static size_t const value = 0;
};

template <size_t N, class U>
struct rank<U[N]> {
    static size_t const value = 1 + rank<U>::value;
};


#endif
