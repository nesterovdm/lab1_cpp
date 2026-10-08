#include "Task1.h"

int sumLastNums(int x) {
  if (x < 10) {
    std::cout << "Число X должно быть больше или равно 10";
    return -1;
  }
  int last_two_digits = x % 100;
  int first_digit = last_two_digits / 10;
  int second_digit = last_two_digits % 10;
  int result = first_digit + second_digit;
  std::cout << "Сумма последних 2-х цифр: " << x;
  return result;
}

bool isPositive(int x) {
  if (x > 0) {
    return true;
  } else {
    return false;
  }
}

bool isUpperCase(char x) {
  return (x >= 'A' && x <= 'Z');
}

bool isDivisor(int a, int b) {
  if (a == 0 || b == 0) {
    return false;
  }
  return a % b == 0 || b % a == 0;
}

int lastNumSum(int a, int b) {
  return std::abs(a) % 10 + std::abs(b) % 10;
}