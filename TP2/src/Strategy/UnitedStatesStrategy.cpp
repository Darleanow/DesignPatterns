#include "DesignPatterns/Strategy/UnitedStatesStrategy.h"

#include <iostream>

void UnitedStatesStrategy::display(std::string value) const {
  // celsius to fahrenheit;
  double celsius = std::stod(value);

  double fahrenheit = 1.;

  fahrenheit = celsius * 1.8 + 32;

  std::cout << "Fahrenheit: " << fahrenheit << "°F" << std::endl;
}
