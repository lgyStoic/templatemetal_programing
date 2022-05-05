#include "rank.h"
#include <iostream>

int main() {
    using array_t = int[10][20][30][40];
    std::cout << "rank of array_t is : " << rank<array_t>::value << std::endl;
    return 0;
}
