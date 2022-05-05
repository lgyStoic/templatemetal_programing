#include "abs.h"
#include <iostream>

int main() {
  int const n = -10;
  auto n_n = template_abs<n>::value;
  std::cout << n_n << std::endl;
  return 0;
}
