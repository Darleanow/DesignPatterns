#include "DesignPatterns/Observer/UnitedStatesObserver.h"
#include "DesignPatterns/Strategy/UnitedStatesStrategy.h"

UnitedStatesObserver::UnitedStatesObserver() {
  m_strategy = std::move(std::make_unique<UnitedStatesStrategy>());
}

void UnitedStatesObserver::update(std::string message) {
  m_strategy->display(message);
}
