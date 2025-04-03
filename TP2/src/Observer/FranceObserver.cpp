#include "DesignPatterns/Observer/FranceObserver.h"
#include "DesignPatterns/Strategy/FranceStrategy.h"

FranceObserver::FranceObserver() {
  m_strategy = std::move(std::make_unique<FranceDisplayStrategy>());
}

void FranceObserver::update(std::string message) {
  m_strategy->display(message);
}
