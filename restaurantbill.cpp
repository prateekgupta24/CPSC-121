#include <iostream>

int main()
{
  double meal, tip, taxes, tipCost, total;

  std::cout << "Please input meal cost: ";
  std::cin >> meal;
  std::cout << "Please input tip percentage: ";
  std::cin >> tip;
  std::cout << " " << std::endl;

  taxes = meal * 0.075;
  tipCost = meal * tip/100;
  total = meal + taxes + tipCost;

  std::cout << "Restaurant Bill" << std::endl;
  std::cout << "===================" << std::endl;
  std::cout << "Subtotal: $" << meal << std::endl;
  std::cout << "Taxes: $" << taxes << std::endl;
  std::cout << "Tip: $" << tipCost << std::endl;
  std::cout << "===================" << std::endl;
  std::cout << "Total: $" << total << std::endl;
  return 0;
}
