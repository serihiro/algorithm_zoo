#include <iostream>
#include <vector>

void swap(std::vector<int> &vec, int a, int b) {
  int tmp = vec[a];
  vec[a] = vec[b];
  vec[b] = tmp;
}

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
      swap(vec, i, min_index);
    }
  }
}

int main() {
  std::vector<int> v = {9, 3, 5, 1, 5, 2, 3};
  std::cout << "before: ";
  for (const auto &e : v) {
    std::cout << e << ", ";
  }
  std::cout << std::endl;

  selection_sort(v);

  std::cout << "before: ";
  for (const auto &e : v) {
    std::cout << e << ", ";
  }
  std::cout << std::endl;

  return 0;
}