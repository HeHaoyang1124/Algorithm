#pragma once
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <thread>

class Timer {
  std::chrono::time_point<std::chrono::steady_clock> start, end;

public:
  Timer() { start = std::chrono::high_resolution_clock::now(); }

  ~Timer() {
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> duration = end - start;

    std::cout << duration.count();
  }
};

void generates(long long *arr, long long length);

void swap(long long &a, long long &b);

void Selection_Sort(long long *arr, long long length,
                    bool Small_in_the_former = true);

void Bubble_Sort(long long *arr, int length, bool Small_in_the_former = true);

void Old_Bubble_Sort(long long *arr, int length,
                     bool Small_in_the_former = true);