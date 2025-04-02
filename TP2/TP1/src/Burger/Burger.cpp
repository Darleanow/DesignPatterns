#include "DesignPatterns/Burger/Burger.h"
#include "DesignPatterns/CoreUtils/CoreUtils.h"

#include <iostream>

void Burger::display() const
{
  std::cout << "Burger:\n";
  std::cout << "  Bread: " << BurgerUtils::to_string(m_bread_type) << '\n';
  std::cout << "  Meat:  " << BurgerUtils::to_string(m_meat_type) << '\n';

  std::cout << "  Toppings:\n";
  for(const auto &topping : m_toppings) {
    std::cout << "    - " << BurgerUtils::to_string(topping) << '\n';
  }
}

Bread Burger::get_bread() const
{
  return m_bread_type;
}

void Burger::set_bread(Bread bread_type)
{
  m_bread_type = bread_type;
}

Meat Burger::get_meat() const
{
  return m_meat_type;
}

void Burger::set_meat(Meat meat_type)
{
  m_meat_type = meat_type;
}

const std::vector<Topping> &Burger::get_toppings() const
{
  return m_toppings;
}

void Burger::set_toppings(std::vector<Topping> topping)
{
  m_toppings = topping;
}

void Burger::add_topping(Topping topping)
{
  m_toppings.push_back(topping);
}
