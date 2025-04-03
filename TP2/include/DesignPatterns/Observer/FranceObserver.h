#pragma once

#include "DesignPatterns/Observer/AObserver.h"
#include "DesignPatterns/Strategy/ADisplayStrategy.h"
#include <memory>
#include <string>

class FranceObserver final : public AObserver {
public:
  FranceObserver();
  ~FranceObserver() override = default;
  virtual void update(std::string message) override;

private:
  std::unique_ptr<ADisplayStrategy> m_strategy;
};
