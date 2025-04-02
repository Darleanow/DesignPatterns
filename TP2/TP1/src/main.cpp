#include "DesignPatterns/Menus/MenuFactory.h"
#include <iostream>

int main()
{
  MenuFactory factory;

  const auto  menu_names = factory.available_menus();

  int         i = 1;
  for(const auto &name : menu_names) {
    std::cout << i++ << ". " << name << '\n';
  }

  std::string input;
  std::cout << "Make your selection: ";
  std::getline(std::cin, input);

  int choice = std::stoi(input);

  if(choice < 1 || choice > static_cast<int>(menu_names.size())) {
    std::cerr << "Invalid selection.\n";
    return 1;
  }

  const auto &name = menu_names.at(choice - 1);

  std::cout << "Selected Menu: " << name << std::endl;

  auto menu = factory.create(name);
  menu->display();

  return 0;
}
