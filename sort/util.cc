#include "util.h"
#include <algorithm>
#include <cassert>
#include <iostream>

void setup_arrays(std::vector<int> &v1, std::vector<int> &v2) {
  v1 = {9, 3, 5, 1, 5, 2, 3};
  copy(v1.begin(), v1.end(), back_inserter(v2));
  sort(v2.begin(), v2.end());
}

void assert_arrays(std::vector<int> &v1, std::vector<int> &v2) {
  assert(v1.size() == v2.size());
  for (int i = 0; i < static_cast<int>(v1.size()); ++i) {
    assert(v1[i] == v2[i]);
  }
}

void dump_array(std::vector<int> &v) {
  for (const int e : v) {
    std::cout << e << ",";
  }
  std::cout << std::endl;
}

void swap_elements(std::vector<int> &v, int a, int b) {
  int tmp = v[a];
  v[a] = v[b];
  v[b] = tmp;
}