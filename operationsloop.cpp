#include <iostream>

int main()
{
  int num1, num2, total;
  char choice;

  while(choice != 'x')
  {
    std::cout << "Please enter in the operation (+, -, *, /) or x to exit the program: ";
    std::cin >> choice;

    if(choice == '+')
    {
      std::cout << "Please input the first number: ";
      std::cin >> num1;
      std::cout << "Please input the second number: ";
      std::cin >> num2;
      total = num1 + num2;
      std::cout << "You chose to addition: " << num1 << " + " << num2 << " = " << total << "\n";
    }
    else if(choice == '-')
    {
      std::cout << "Please input the first number: ";
      std::cin >> num1;
      std::cout << "Please input the second number: ";
      std::cin >> num2;
      total = num1 - num2;
      std::cout << "You chose to subtraction: " << num1 << " - " << num2 << " = " << total << "\n";
    }
    else if(choice == '*')
    {
      std::cout << "Please input the first number: ";
      std::cin >> num1;
      std::cout << "Please input the second number: ";
      std::cin >> num2;
      total = num1 * num2;
      std::cout << "You chose to multiplication: " << num1 << " * " << num2 << " = " << total << "\n";    }
    else if(choice == '/')
    {
      std::cout << "Please input the first number: ";
      std::cin >> num1;
      std::cout << "Please input the second number: ";
      std::cin >> num2;
      total = num1 / num2;
      std::cout << "You chose to division: " << num1 << " / " << num2 << " = " << total << "\n";
    }
  }
  return 0;
}
