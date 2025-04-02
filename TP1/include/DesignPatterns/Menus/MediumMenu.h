#pragma once

#include "DesignPatterns/Burger/Burger.h"
#include "DesignPatterns/Menus/AMenu.h"

class MediumMenu final : public AMenu
{
public:
  MediumMenu();

  virtual void display() const override;

private:
  Burger    m_burger;
  FriesSize m_fries;
  Drink     m_drink;
};
