#include <iostream>

int main(void) {
  std::string user_name;
  std::cout << "Please enter your name: ";
  std::cin >> user_name;
  std::cout << "Hello, " << user_name << "! Nice to meet you!" << std::endl;
  return 0;
}
