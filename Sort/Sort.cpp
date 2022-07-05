#include "Sort.h"

void generates(long long *arr, long long length) {

  for (long long i = 0; i < length; i++) {
    arr[i] = rand() % 1000;
  }
}

void swap(long long &a, long long &b) {

  long long temp = a;
  a = b;
  b = temp;
}

void Selection_Sort(long long *arr, long long length,
                    bool Small_in_the_former) {
  Timer T;

  if (Small_in_the_former) {
    for (long long i = 0; i < length; i++) {
      long long smallest_index = i;

      for (long long j = i + 1; j < length; j++) {
        if (arr[j] < arr[smallest_index]) {
          smallest_index = j;
        }
      }

      swap(arr[i], arr[smallest_index]);
    }
  }

  else {
    for (long long i = 0; i < length; i++) {
      long long smallest_index = i;

      for (long long j = i + 1; j < length; j++) {
        if (arr[j] > arr[smallest_index]) {
          smallest_index = j;
        }
      }

      swap(arr[i], arr[smallest_index]);
    }
  }

  printf("Selection_Sort took time: ");
}

void Bubble_Sort(long long *arr, int length, bool Small_in_the_former) {
  Timer T;

  bool ok;
  int left = 0, right = length - 1;

  for (int i = 1; i <= length / 2; i++) {
    ok = true;

    // from left to right
    for (int j = left; j < right; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        ok = false;
      }
    }
    right--;
    if (ok)
      break;

    // from right to left
    for (int j = right; j > left; j--) {
      if (arr[j] < arr[j - 1]) {
        swap(arr[j], arr[j - 1]);
        ok = false;
      }
    }
    left++;
    if (ok)
      break;
  }

  printf("Bubble sort took time: ");
}

void Old_Bubble_Sort(long long *arr, int length, bool Small_in_the_former) {
  Timer T;
  bool ok;

  for (int i = 0; i < length - 1; i++) {
    ok = true;
    for (int j = 0; j < length - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        ok = false;
      }
    }
    if (ok)
      break;
  }
  return;
}