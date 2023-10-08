#include <iostream>

int main(void) {
  int user_number;
  std::cout << "Enter your number: ";
  std::cin >> user_number;

  (user_number > 0) ? std::cout << "Your number is positive." << std::endl :
  (user_number < 0) ? std::cout << "Your number is negative." << std::endl :
  std::cout << "Your number is zero." << std::endl;

  return 0;
}
