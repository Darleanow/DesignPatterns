#include "DesignPatterns/Menus/LargeMenu.h"
#include "DesignPatterns/Burger/Burger.h"
#include "DesignPatterns/BurgerBuilder/BurgerBuilder.h"
#include "DesignPatterns/CoreUtils/CoreUtils.h"
#include <iostream>

LargeMenu::LargeMenu()
{
  m_burger = (new BurgerBuilder)
                 ->add_bread(Bread::WholeMeal)
                 .add_meat(Meat::Beef)
                 .add_topping(Topping::Cheese)
                 .add_topping(Topping::Sauce)
                 .add_topping(Topping::Salad)
                 .add_topping(Topping::Tomato)
                 .build();

  m_fries = FriesSize::Large;
  m_drink = Drink::Coke;
}

void LargeMenu::display() const
{
  std::cout << "Large Menu:\n";
  std::cout << "Drink:\n";
  std::cout << "  " << BurgerUtils::to_string(m_drink) << '\n';
  std::cout << "Fries:\n";
  std::cout << "  " << BurgerUtils::to_string(m_fries) << '\n';

  m_burger.display();
}
