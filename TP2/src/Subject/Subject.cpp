#include "DesignPatterns/Subject/Subject.h"

#include <iostream>

void Subject::add(std::shared_ptr<AObserver> observer) {
  m_observers.push_back(observer);
}

void Subject::notify(std::string message) {
  std::cout << "Received an update !" << std::endl;
  for (auto &observer : m_observers) {
    observer->update(message);
  }
}
