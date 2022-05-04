#ifndef __GCD_H__
#define __GCD_H__


template <unsigned M, unsigned N>
struct gcd {
    static int const value = gcd<N, M % N>::value; 
};

template <unsigned M>
struct gcd <M, 0>{
    static_assert(M != 0);    
    static int const value = M;
};


#endif 
