#include <iostream>

int main(void) {
  int first_number;
  int second_number;

  std::cout << "Enter the first number: ";
  std::cin >> first_number;
  std::cout << "Enter the second number: ";
  std::cin >> second_number;

  int result = first_number + second_number;

  std::cout << "\nThe sum of these numbers is: " << result << std::endl;

  return 0;
}
