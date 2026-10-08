#include "Task2.h"

double safeDiv(int x, int y) {
  if (y == 0) {
    return 0;
  }
  return static_cast<double>(x) / y;
}

std::string makeDecision(int x, int y) {
  std::string sign = "==";
  if (x < y) {
    sign = "<";
  } else if (x > y) {
    sign = ">";
  }
  return std::to_string(x) + " " + sign + " " + std::to_string(y);
}

bool sum3(int x, int y, int z) {
  return x + y == z || x + z == y || y + z == x;
}

std::string age(int x) {
  int last_two = x % 100;
  int last = x % 10;
  if (last_two >= 11 && last_two <= 14) {
    return std::to_string(x) + " лет";
  }
  if (last == 1) {
    return std::to_string(x) + " год";
  }
  if (last >= 2 && last <= 4) {
    return std::to_string(x) + " года";
  }
  return std::to_string(x) + " лет";
}

void printDays(int x) {
  switch (x) {
    case 1:
      std::cout << "понедельник\n";
      [[fallthrough]];
    case 2:
      std::cout << "вторник\n";
      [[fallthrough]];
    case 3:
      std::cout << "среда\n";
      [[fallthrough]];
    case 4:
      std::cout << "четверг\n";
      [[fallthrough]];
    case 5:
      std::cout << "пятница\n";
      [[fallthrough]];
    case 6:
      std::cout << "суббота\n";
      [[fallthrough]];
    case 7:
      std::cout << "воскресенье\n";
      break;
    default:
      std::cout << "это не день недели\n";
      break;
  }
}