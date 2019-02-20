#include <iostream>
#include <cmath>

int main()
{
    int num1, num2, total;
    char operation;

    std::cout << "Please Enter in the Operation (+,-,*,/): ";
    std::cin >> operation;
    std::cout << "Please input the first number: ";
    std::cin >> num1;
    std::cout << "Please input the second number: ";
    std::cin >> num2;

    if(operation == '+')
    {
      total = num1 + num2;
      std::cout << "You chose to add: " << num1 << " + " << num2 << " = " << total << "\n";
    }
    else if(operation == '-')
    {
      total = num1 - num2;
      std::cout << "You chose to subtract: " << num1 << " - " << num2 << " = " << total << "\n";
    }
    else if(operation == '*')
    {
      total = num1 * num2;
      std::cout << "You chose to multiply: " << num1 << " * " << num2 << " = " << total << "\n";
    }
    else if(operation == '/')
    {
      total = num1 / num2;
      std::cout << "You chose to divide: " << num1 << " / " << num2 << " = " << total << "\n"g;
    }
    else
    {
      std::cout << "You've entered an invalid type of operation\n";
    }
    return 0;
}
