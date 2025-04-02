#include "DesignPatterns/CoreUtils/CoreUtils.h"
#include "DesignPatterns/Burger/Burger.h"

namespace BurgerUtils {
std::string to_string(Bread bread)
{
  switch(bread) {
  case Bread::White:
    return "White";
  case Bread::WholeMeal:
    return "WholeMeal";
  }
  return "Unknown";
}

std::string to_string(Meat meat)
{
  switch(meat) {
  case Meat::Chicken:
    return "Chicken";
  case Meat::Beef:
    return "Beef";
  case Meat::Veggie:
    return "Veggie";
  }
  return "Unknown";
}

std::string to_string(Topping topping)
{
  switch(topping) {
  case Topping::Cheese:
    return "Cheese";
  case Topping::Tomato:
    return "Tomato";
  case Topping::Salad:
    return "Salad";
  case Topping::Sauce:
    return "Sauce";
  }
  return "Unknown";
}

std::string to_string(FriesSize fries)
{
  switch(fries) {
  case FriesSize::Small:
    return "Small fries";
  case FriesSize::Medium:
    return "Medium fries";
  case FriesSize::Large:
    return "Large fries";
  }
  return "Unknown";
}

std::string to_string(Drink drink)
{
  switch(drink) {
  case Drink::TapWatver:
    return "Tap water";
  case Drink::Coke:
    return "Coke";
  case Drink::Fanta:
    return "Fanta";
  }

  return "Unknown";
}
} // namespace BurgerUtils
