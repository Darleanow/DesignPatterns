#pragma once

#include <string>

class ADisplayStrategy
{
public:
  virtual ~ADisplayStrategy()                   = default;
  virtual void display(std::string value) const = 0;
};
