#include <iostream>
#include <vector>

void swap(std::vector<int> &vec, int a, int b) {
  int tmp = vec[a];
  vec[a] = vec[b];
  vec[b] = tmp;
}

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

  std::size_t vector_size = vec.size();

  while (true) {
    bool swaped = false;
    for (int i = 0; i < vector_size; ++i) {
      for (int j = i; j < vector_size - 1; ++j) {
        if (vec[j] > vec[j + 1]) {
          swap(vec, j, j + 1);
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
  std::vector<int> v = {9, 3, 5, 1, 5, 2, 3};
  std::cout << "before: ";
  for (const auto &e : v) {
    std::cout << e << ", ";
  }
  std::cout << std::endl;

  bouble_sort(v);

  std::cout << "after: ";
  for (const auto &e : v) {
    std::cout << e << ", ";
  }
  std::cout << std::endl;
  return 0;
}
