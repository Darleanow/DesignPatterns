#include "DesignPatterns/Menus/SmallMenu.h"
#include "DesignPatterns/Burger/Burger.h"
#include "DesignPatterns/BurgerBuilder/BurgerBuilder.h"
#include "DesignPatterns/CoreUtils/CoreUtils.h"

#include <iostream>

SmallMenu::SmallMenu()
{
  m_burger = (new BurgerBuilder())
                 ->add_bread(Bread::White)
                 .add_meat(Meat::Chicken)
                 .add_topping(Topping::Cheese)
                 .build();

  m_fries = FriesSize::Small;
  m_drink = Drink::TapWatver;
}

void SmallMenu::display() const
{
  std::cout << "Small Menu:\n";
  std::cout << "Drink:\n";
  std::cout << "  " << BurgerUtils::to_string(m_drink) << '\n';
  std::cout << "Fries:\n";
  std::cout << "  " << BurgerUtils::to_string(m_fries) << '\n';

  m_burger.display();
}
