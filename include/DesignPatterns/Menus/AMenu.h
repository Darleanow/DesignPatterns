#pragma once

class AMenu
{
public:
  virtual ~AMenu() = default;

  virtual void display() const = 0;
};
