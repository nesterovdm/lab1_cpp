#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"

int main () {
  int task_number = 0;
  std::cout << "Введите номер задачи: ";
  std::cin >> task_number;
  switch (task_number) {
  case 1: {
    int number = 0;
    std::cout << "Введите число X (X >= 10): ";
    std::cin >> number;
    sumLastNums(number);
    break;
  }

  case 2: {
    int number = 0;
    std::cout << "Введите целое число: ";
    std::cin >> number;
    if (isPositive(number)) {
      std::cout << "Введённое число - положительное";
    } else {
      std::cout << "Введённое число - не положительное";
    }
    break;
  }

  case 3: {
    char letter = 0;
    std::cout << "Введите букву латинского алфавита: ";
    std::cin >> letter;
    if (isUpperCase(letter)) {
      std::cout << "Введена большая буква";
    } else {
      std::cout << "Введена маленькая буква";
    }
    break;
  }

  case 4: {
    int first_number = 0;
    int second_number = 0;
    std::cout << "Введите первое целое число: ";
    std::cin >> first_number;
    std::cout << "Введите второе целое число: ";
    std::cin >> second_number;
    if (isDivisor(first_number, second_number)) {
      std::cout << "Одно из введённых чисел делится на второе нацело";
    } else {
      std::cout << "Ни одно из введённых чисел не делится на второе нацело";
    }
    break;
  }

  case 5: {
    int first_number = 0;
    int second_number = 0;
    std::cout << "Введите первое целое число: ";
    std::cin >> first_number;
    std::cout << "Введите второе целое число: ";
    std::cin >> second_number;
    std::cout << "Сумма цифр из разряда единиц: ";
    std::cout << lastNumSum(first_number, second_number);
    break;
  }

  case 6: {
    int dividend = 0;
    std::cout << "Введите делимое (целое число): ";
    std::cin >> dividend;
    int divider = 0;
    std::cout << "Введите делитель (целое число): ";
    std::cin >> divider;
    std::cout << "Результат деления: " << safeDiv(dividend, divider);
    break;
  }

  case 7: {
    int first_number = 0;
    int second_number = 0;
    std::cout << "Введите первое целое число: ";
    std::cin >> first_number;
    std::cout << "Введите второе целое число: ";
    std::cin >> second_number;
    std::cout << "Результат сравнения: ";
    std::cout << makeDecision(first_number, second_number);
    break;
  }

  case 8: {
    int first_number = 0;
    int second_number = 0;
    int third_number = 0;
    std::cout << "Введите первое целое число: ";
    std::cin >> first_number;
    std::cout << "Введите второе целое число: ";
    std::cin >> second_number;
    std::cout << "Введите третье целое число: ";
    std::cin >> third_number;
    if (sum3(first_number, second_number, third_number)) {
      std::cout << "Найдены два числа, сумма которых равна третьему";
    } else {
      std::cout << "Не найдены два числа, сумма которых равна третьему";
    }
    break;
  }

  case 9: {
    int input_age = 0;
    std::cout << "Введите целое неотрицательное число: ";
    std::cin >> input_age;
    if (input_age < 0) {
      std::cout << "Введено некорректное число";
      break;
    }
    std::cout << "Введёный возраст: " << age(input_age);
    break;
  }

  case 10: {
    int day_of_week = 0;
    std::cout << "Введите число, обозначающее день недели: ";
    std::cin >> day_of_week;
    std::cout << "Вывожу названия дней недели, начиная с этого...\n";
    printDays(day_of_week);
    break;
  }

  case 11: {
    int number = 0;
    std::cout << "Введите натуральное число: ";
    std::cin >> number;
    if (number < 1) {
      std::cout << "Введено не натуральное число";
      break;
    }
    std::cout << "Числа от " << number << " до 0, записанные в обратном порядке: \n";
    std::cout << reverseListNums(number);
    break;
  }

  case 12: {
    int first_number = 0;
    int second_number = 0;
    std::cout << "Введите первое целое число X: ";
    std::cin >> first_number;
    std::cout << "Введите второе целое число Y: ";
    std::cin >> second_number;
    std::cout << "Результат возведения числа X в степень Y: ";
    std::cout << pow(first_number, second_number);
    break;
  }

  case 13: {
    int number = 0;
    std::cout << "Введите целое число: ";
    std::cin >> number;
    if (equalNum(number)) {
      std::cout << "Все цифры числа равны";
    } else {
      std::cout << "Не все цифры числа равны";
    }
    break;
  }

  case 14: {
    int number = 0;
    std::cout << "Введите натуральное число: ";
    std::cin >> number;
    if (number < 1) {
      std::cout << "Введено не натуральное число";
      break;
    }
    std::cout << "Получившийся треугольник: ";
    leftTriangle(number);
    break;
  }

  case 15: {
    guessGame();
    break;
  }

  case 16: {
    int size_array = 0;
    int find_value = 0;
    std::cout << "Введите размер массива (>= 1): ";
    std::cin >> size_array;
    if (size_array < 1) {
      std::cout << "Длина массива не может быть меньше 1";
      break;
    }
    int* array = new int[size_array];
    InputArray(array, size_array);
    std::cout << "Введите значение элемента для поиска: ";
    std::cin >> find_value;
    int occurrence_index = findLast(array, find_value, size_array);
    if (occurrence_index == -1) {
      std::cout << "Элемент не найден";
    } else {
      std::cout << "Последний индекс вхождения: " << occurrence_index;
    }
    delete[] array;
    break;
  }

  case 17: {
    int size_array = 0;
    int index_new_element = 0;
    int value_new_element = 0;
    std::cout << "Введите размер массива: ";
    std::cin >> size_array;
    if (size_array < 1) {
      std::cout << "Длина массива не может быть меньше 1";
      break;
    }
    int* array = new int[size_array];
    InputArray(array, size_array);
    std::cout << "Введите индекс, на который нужно вставить элемент: ";
    std::cin >> index_new_element;
    if (index_new_element > size_array) {
      std::cout << "Невозможно вставить элемент на данный индекс";
      delete[] array;
      break;
    }
    std::cout << "Введите значение нового элемента (является целым числом): ";
    std::cin >> value_new_element;
    int* new_array = add(array, value_new_element, index_new_element, size_array);
    std::cout << "Теперь массив выглядит так: ";
    PrintArray(new_array, size_array + 1);
    delete[] array;
    delete[] new_array;
    break;
  }

  case 18: {
    int size_array = 0;
    std::cout << "Введите размер массива: ";
    std::cin >> size_array;
    if (size_array < 1) {
      std::cout << "Длина массива не может быть меньше 1";
      break;
    }
    int* array = new int[size_array];
    InputArray(array, size_array);
    reverse(array, size_array);
    std::cout << "Теперь массив выглядит так: ";
    PrintArray(array, size_array + 1);
    delete[] array;
    break;
  }

  case 19: {
    int arr1_size = 0;
    std::cout << "Введите размер массива 1: ";
    std::cin >> arr1_size;
    if (arr1_size < 1) {
      std::cout << "Длина массива не может быть меньше 1";
      break;
    }
    int* array_1 = new int[arr1_size];
    InputArray(array_1, arr1_size);
    int arr2_size = 0;
    std::cout << "Введите размер массива 2: ";
    std::cin >> arr2_size;
    if (arr2_size < 1) {
      std::cout << "Длина массива не может быть меньше 1";
      delete[] array_1;
      break;
    }
    int* array_2 = new int[arr2_size];
    InputArray(array_2, arr2_size);
    int* array_concat = concat(array_1, array_2, arr1_size, arr2_size);
    std::cout << "Результат объединения массивов: ";
    PrintArray(array_concat, arr1_size + arr2_size);
    delete[] array_1;
    delete[] array_2;
    break;
  }

  case 20: {
    int size_array = 0;
    std::cout << "Введите размер массива: ";
    std::cin >> size_array;
    if (size_array < 1) {
      std::cout << "Длина массива не может быть меньше 1";
      break;
    }
    int* array = new int[size_array];
    InputArray(array, size_array);
    int* result_array = deleteNegative(array, size_array);
    std::cout << "Массив без отрицательных чисел: ";
    int count_in_result = 0;
    for (int i = 0; i < size_array; ++i) {
      if (array[i] >= 0) {
        ++count_in_result;
      }
    }
    PrintArray(result_array, count_in_result);
    delete[] array;
    delete[] result_array;
    break;
  }
  
  default:
    std::cout << "Задача не найдена";
  }
}