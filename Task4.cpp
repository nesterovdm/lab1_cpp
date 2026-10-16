#include "Task4.h"

void InputArray(int* array, int size) {
  if (array == nullptr || size == 0) {
    return;
  }

  for (size_t i = 0; i < size; ++i) {
    std::cout << "Введите элемент [" << i << "]: ";
    std::cin >> array[i];
  }
}

void PrintArray(int* array, int size) {
  if (array == nullptr || size == 0) {
    return;
  }

  for (size_t i = 0; i < size; ++i) {
    std::cout << array[i];
    if (i + 1 < size) {
      std::cout << ", ";
    }
  }
  std::cout << std::endl;
}

int findLast(int arr[], int x, int array_size) {
  for (int i = array_size - 1; i >= 0; --i) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;
}

int* add(int arr[], int x, int pos, int array_size) {
  int* result = new int[array_size + 1];
  for (int i = 0; i < pos; ++i) {
    result[i] = arr[i];
  }
  result[pos] = x;
  for (int i = pos; i < array_size; ++i) {
    result[i + 1] = arr[i];
  }
  return result;
}

void reverse(int arr[], int array_size) {
  for (int i = 0; i < array_size / 2; ++i) {
    int temp = arr[i];
    arr[i] = arr[array_size - 1 - i];
    arr[array_size - 1 - i] = temp;
  }
}

int* concat(int arr1[], int arr2[], int arr1_size, int arr2_size) {
  int* result = new int[arr1_size + arr2_size];
  for (int i = 0; i < arr1_size; ++i) {
    result[i] = arr1[i];
  }
  for (int i = 0; i < arr2_size; ++i) {
    result[arr2_size + i] = arr2[i];
  }
  return result;
}

int* deleteNegative(int arr[], int size_array) {
  int count = 0;
  for (int i = 0; i < size_array; ++i) {
    if (arr[i] >= 0) {
      ++count;
    }
  }
  int* result = new int[count];
  int index = 0;
  for (int i = 0; i < size_array; ++i) {
    if (arr[i] >= 0) {
      result[index] = arr[i];
      ++index;
    }
  }
  return result;
}