#include <iostream>

int main(void) {
  double celsius;
  double fahrenheit;
  std::cout << "Enter temperature in Celsius: ";
  std::cin >> celsius;

  fahrenheit = (celsius * 9/5) + 32;
  std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

  return 0;
}
