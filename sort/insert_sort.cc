#include "util.h"
#include <iostream>
#include <vector>

void insert_sort(std::vector<int> &vec) {
  int vec_length = static_cast<int>(vec.size());
  for (int i = 1; i < vec_length; ++i) {
    int tmp = vec[i];
    int j = i;

    while (j > 0 && vec[j - 1] > tmp) {
      vec[j] = vec[j - 1];
      --j;
    }
    vec[j] = tmp;
  }
}

int main() {
  std::vector<int> v1, v2;
  setup_arrays(v1, v2);

  std::cout << "before: ";
  dump_array(v1);

  insert_sort(v1);
  assert_arrays(v1, v2);

  std::cout << "before: ";
  dump_array(v2);

  return 0;
}
