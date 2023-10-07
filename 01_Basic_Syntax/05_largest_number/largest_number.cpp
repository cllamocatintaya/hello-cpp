#include <iostream>

int main(void) {
  int first_number;
  int second_number;
  int third_number;

  std::cout << "Please enter three numbers: \n";
  std::cin >> first_number >> second_number >> third_number;

  int largest_number = first_number;

  if (second_number > largest_number) {
    largest_number = second_number;
  }

  if (third_number > largest_number) {
    largest_number = third_number;
  }

  std::cout << "The largest number is: " << largest_number << std::endl;

  return 0;
}
