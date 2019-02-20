#include <iostream>
#include <cmath>

int main()
{
  double wage, hours, total;

  std::cout << "Enter Hourly Wage: ";
  std::cin >> wage;
  std::cout << "Enter Hours Worked: ";
  std::cin >> hours;

  if(hours <= 40)
  {
    total = wage * hours;
    std::cout << "Total Salary Owed: $" << total << "\n";
  }
  else if(hours <= 65)
  {
    total = (wage * 40) + (hours - 40) * (wage * 1.5);
    std::cout << "Total Salary Owed: $" << total << "\n";
  }
  else if(hours > 65)
  {
    total = (wage * 40) + (wage * 1.5) * 25 + (hours - 65) * (wage * 2);
    std::cout << "Total Salary Owed: $" << total << "\n";
  }
  return 0;
}
