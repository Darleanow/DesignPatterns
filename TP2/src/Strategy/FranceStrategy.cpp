#include "DesignPatterns/Strategy/FranceStrategy.h"
#include <iostream>
#include <ostream>

void FranceDisplayStrategy::display(std::string value) const {
  // Already in Celsius by default, no conversion
  std::cout << "Degrees: " << value << "°C" << std::endl;
}
