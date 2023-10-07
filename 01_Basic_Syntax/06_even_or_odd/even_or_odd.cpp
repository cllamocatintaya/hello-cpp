#include <iostream>

int main(void) {
  int user_number;

  std::cout << "Enter your number: ";
  std::cin >> user_number;

  if (user_number % 2 == 0) {
    std::cout << "Your number is even." << std::endl;
  } else {
    std::cout << "Your number is odd." << std::endl;
  }

  return 0;
}
