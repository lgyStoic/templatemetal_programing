#ifndef __ABS_H__
#define __ABS_H_
#include <climits>

template< int N >
struct template_abs {
 static_assert(N != INT_MIN);
 static constexpr int value = (N < 0) ? -N : N;
};

#endif


