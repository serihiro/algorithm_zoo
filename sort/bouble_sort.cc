#include "util.h"
#include <iostream>
#include <iterator>
#include <vector>

std::vector<int> bouble_sort(std::vector<int> &vec) {
  // c++03 style vector loop
  // for (std::vector<int>::const_iterator it = vec.begin(), e = vec.end(); it
  // != e; ++it)
  // {
  // }

  // c++11 style vector loop
  // `&` means that e is declarated as a reference
  // see also https://cpprefjp.github.io/lang/cpp11/range_based_for.html
  // for (const auto &e : vec)
  // {
  // }

  int vector_size = static_cast<int>(vec.size());

  while (true) {
    bool swaped = false;
    for (int i = 0; i < vector_size; ++i) {
      for (int j = i; j < vector_size - 1; ++j) {
        if (vec[j] > vec[j + 1]) {
          swap_elements(vec, j, j + 1);
          swaped = true;
        }
      }
    }
    if (!swaped) {
      break;
    }
  }

  return vec;
}

int main() {
  std::vector<int> v1, v2;
  setup_arrays(v1, v2);

  std::cout << "before: ";
  dump_array(v1);

  bouble_sort(v1);
  assert_arrays(v1, v2);

  std::cout << "after: ";
  dump_array(v1);

  return 0;
}
