#pragma once

#include "DesignPatterns/Observer/AObserver.h"
#include "DesignPatterns/Strategy/ADisplayStrategy.h"
#include <memory>

class UnitedStatesObserver final : public AObserver {
public:
  UnitedStatesObserver();
  ~UnitedStatesObserver() override = default;
  virtual void update(std::string message) override;

private:
  std::unique_ptr<ADisplayStrategy> m_strategy;
};
