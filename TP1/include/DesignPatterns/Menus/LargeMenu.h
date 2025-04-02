#pragma once

#include "DesignPatterns/Burger/Burger.h"
#include "DesignPatterns/Menus/AMenu.h"

class LargeMenu final : public AMenu
{
public:
  LargeMenu();

  virtual void display() const override;

private:
  Burger    m_burger;
  FriesSize m_fries;
  Drink     m_drink;
};
