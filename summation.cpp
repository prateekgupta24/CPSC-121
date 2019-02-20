#include <iostream>

int main()
{
  int num1, times;
  int total = 0;

  std::cout << "Please enter a number: ";
  std::cin >> num1;
  std::cout << "How many times to be added: ";
  std::cin >> times;

  for(int i = 0; i < times; i++)
  {
    total += num1;
  }

  std::cout << "The summation is " << total << "\n";
  return 0;
}
