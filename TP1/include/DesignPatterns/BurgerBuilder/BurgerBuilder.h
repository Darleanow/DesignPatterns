#pragma once

#include "DesignPatterns/Burger/Burger.h"

class BurgerBuilder
{
public:
  Burger         build() const;

  BurgerBuilder &add_bread(Bread bread);
  BurgerBuilder &add_meat(Meat meat);
  BurgerBuilder &add_topping(Topping topping);

private:
  Burger m_burger;
};
