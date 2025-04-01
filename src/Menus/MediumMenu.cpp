#include "DesignPatterns/Menus/MediumMenu.h"
#include "DesignPatterns/Burger/Burger.h"
#include "DesignPatterns/BurgerBuilder/BurgerBuilder.h"
#include "DesignPatterns/CoreUtils/CoreUtils.h"

#include <iostream>

MediumMenu::MediumMenu()
{
  m_burger = (new BurgerBuilder)
                 ->add_bread(Bread::White)
                 .add_meat(Meat::Veggie)
                 .add_topping(Topping::Cheese)
                 .add_topping(Topping::Sauce)
                 .build();

  m_fries = FriesSize::Medium;
  m_drink = Drink::Fanta;
}

void MediumMenu::display() const
{
  std::cout << "Medium Menu:\n";
  std::cout << "Drink:\n";
  std::cout << "  " << BurgerUtils::to_string(m_drink) << '\n';
  std::cout << "Fries:\n";
  std::cout << "  " << BurgerUtils::to_string(m_fries) << '\n';

  m_burger.display();
}
