#include <iostream>

int main(void) {
  double rec_length;
  double rec_width;
  std::cout << "Enter the length of the rectangle: ";
  std::cin >> rec_length;
  std::cout << "Enter the width of the rectangle: ";
  std::cin >> rec_width;

  double rec_area = rec_length * rec_width;
  std::cout << "The area of the rectangle is: " << rec_area << std::endl;

  return 0;
}
