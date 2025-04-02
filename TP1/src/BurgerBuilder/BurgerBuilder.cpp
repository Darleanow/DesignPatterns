#include "DesignPatterns/BurgerBuilder/BurgerBuilder.h"

Burger BurgerBuilder::build() const
{
  return m_burger;
}

BurgerBuilder &BurgerBuilder::add_bread(Bread bread)
{
  m_burger.set_bread(bread);
  return *this;
}

BurgerBuilder &BurgerBuilder::add_meat(Meat meat)
{
  m_burger.set_meat(meat);
  return *this;
}

BurgerBuilder &BurgerBuilder::add_topping(Topping topping)
{
  m_burger.add_topping(topping);
  return *this;
}
