#include "Sort\Sort.h"
#include <chrono>
#include <iostream>
#include <thread>
constexpr auto MAX = 20000;

long long arr[MAX];

int main() {

  generates(arr, MAX);
  Old_Bubble_Sort(arr, MAX, true);
  Bubble_Sort(arr, MAX, true);
  for (int i = 0; i < MAX; i++) {
    std::cout << arr[i] << "\t";
  }

  std::cin.get();

  return 0;
}