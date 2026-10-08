#include "Task1.h"
#include "Task2.h"
#include "Task3.h"

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
    std::cout << "Сумма цифр из разряда единиц: " << lastNumSum(first_number, second_number);
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
    std::cout << "Результат сравнения: " << makeDecision(first_number, second_number);
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
    std::cout << "Результат возведения числа X в степень Y: " << pow(first_number, second_number);
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
  
  default:
    std::cout << "Задача не найдена";
  }
}