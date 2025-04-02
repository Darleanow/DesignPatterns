#pragma once

#include "DesignPatterns/Burger/Burger.h"
#include <string>

namespace BurgerUtils {
std::string to_string(Bread bread);
std::string to_string(Meat meat);
std::string to_string(Topping topping);
std::string to_string(FriesSize fries);
std::string to_string(Drink drink);
} // namespace BurgerUtils
