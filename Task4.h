#ifndef TASK4_H
#define TASK4_H
#include <iostream>

void InputArray(int* array, int size);
void PrintArray(int* array, int size);
int findLast(int arr[], int x, int array_size);
int* add(int arr[], int x, int pos, int array_size);
void reverse(int arr[], int array_size);
int* concat(int arr1[], int arr2[], int arr1_size, int arr2_size);
int* deleteNegative(int arr[], int size_array);

#endif