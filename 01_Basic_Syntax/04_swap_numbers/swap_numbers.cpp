#include <iostream>

int main(void) {
  int number_A;
  int number_B;

  std::cout << "Enter the value for number A: ";
  std::cin >> number_A;

  std::cout << "Enter the value for number B: ";
  std::cin >> number_B;

  std::cout << "\nNumber_A value: " << number_A;
  std::cout << "\nNumber_B value: " << number_B;

  number_A = number_A + number_B;
  number_B = number_A - number_B;
  number_A = number_A - number_B;

  std::cout << "\n\nSwap done!";
  std::cout << "\nNumber_A value: " << number_A;
  std::cout << "\nNumber_B value: " << number_B << std::endl;

  return 0;
}
