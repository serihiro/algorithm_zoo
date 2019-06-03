#include <iostream>
#include <vector>

void insert_sort(std::vector<int> &vec) {
  int vec_length = (int)vec.size();
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
  std::vector<int> v = {9, 3, 5, 1, 5, 2, 3};
  std::cout << "before: ";
  for (const auto &e : v) {
    std::cout << e << ", ";
  }
  std::cout << std::endl;

  insert_sort(v);

  std::cout << "before: ";
  for (const auto &e : v) {
    std::cout << e << ", ";
  }
  std::cout << std::endl;

  return 0;
}