#include "Task3.h"

std::string reverseListNums(int x) {
  std::string result;
  for (int i = x; i >= 0; --i) {
    result += std::to_string(i);
    if (i > 0) {
      result += " ";
    }
  }
  return result;
}

int pow(int x, int y) {
  int result = 1;
  for (int i = 0; i < y; ++i) {
    result *= x;
  }
  return result;
}

bool equalNum(int x) {
  x = std::abs(x);
  int digit = x % 10;
  while (x > 0) {
    if (x % 10 != digit) {
      return false;
    }
    x /= 10;
  }
  return true;
}

void leftTriangle(int x) {
  for (int row = 1; row <= x; ++row) {
    for (int i = 0; i < row; ++i) {
      std::cout << '*';
    }
    std::cout << '\n';
  }
}

void guessGame() {
  int secret = std::rand() % 10;
  int attempts = 0;
  int guess = 0;
  std::cout << "Введите число от 0 до 9: ";
  std::cin >> guess;
  ++attempts;
  while (guess != secret) {
    std::cout << "Вы не угадали, введите число от 0 до 9: ";
    std::cin >> guess;
    ++attempts;
  }
  std::cout << "Вы угадали!\n";
  std::cout << "Количество попыток: " << attempts << "\n";
}