#pragma once

#include <vector>

enum class Bread
{
  White,
  WholeMeal
};

enum class Meat
{
  Chicken,
  Beef,
  Veggie
};

enum class Topping
{
  Cheese,
  Tomato,
  Salad,
  Sauce
};

enum class FriesSize
{
  Small,
  Medium,
  Large
};

enum class Drink
{
  TapWatver,
  Coke,
  Fanta
};

class Burger
{
public:
  void                        display() const;

  Bread                       get_bread() const;
  void                        set_bread(Bread bread_type);

  Meat                        get_meat() const;
  void                        set_meat(Meat meat_type);

  const std::vector<Topping> &get_toppings() const;
  void                        set_toppings(std::vector<Topping> topping);
  void                        add_topping(Topping topping);

private:
  Bread                m_bread_type;
  Meat                 m_meat_type;
  std::vector<Topping> m_toppings;
};
