#pragma once

#include <string>

class AObserver
{
public:
  virtual ~AObserver()                     = default;
  virtual void update(std::string message) = 0;
};
