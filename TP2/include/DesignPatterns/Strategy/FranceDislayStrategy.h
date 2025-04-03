#pragma once

#include "DesignPatterns/Strategy/ADisplayStrategy.h"

class FranceDisplayStrategy final : public ADisplayStrategy
{
public:
  virtual ~FranceDisplayStrategy() override = default;
  virtual void display(std::string value) const override;
};
