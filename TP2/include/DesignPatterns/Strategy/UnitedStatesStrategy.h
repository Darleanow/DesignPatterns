#pragma once

#include "DesignPatterns/Strategy/ADisplayStrategy.h"

class UnitedStatesStrategy final : public ADisplayStrategy
{
public:
  virtual ~UnitedStatesStrategy() override = default;
  virtual void display(std::string value) const override;
};
