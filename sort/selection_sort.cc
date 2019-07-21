#include "util.h"
#include <iostream>
#include <vector>

void selection_sort(std::vector<int> &vec) {
  int vector_length = (int)vec.size();
  int min, min_index, j;

  for (int i = 0; i < vector_length; ++i) {
    j = i + 1;
    min = vec[i];
    min_index = i;
    while (j < vector_length) {
      if (vec[j] < min) {
        min_index = j;
        min = vec[j];
      }
      ++j;
    }
    if (min_index != i) {
      swap_elements(vec, i, min_index);
    }
  }
}

int main() {
  std::vector<int> v1, v2;
  setup_arrays(v1, v2);
  std::cout << "before: ";
  dump_array(v1);

  selection_sort(v1);
  assert_arrays(v1, v2);

  std::cout << "after: ";
  dump_array(v1);

  return 0;
}