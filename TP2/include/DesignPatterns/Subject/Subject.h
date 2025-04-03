#pragma once

#include "DesignPatterns/Observer/AObserver.h"

#include <memory>
#include <vector>

class Subject
{
public:
  void add(std::shared_ptr<AObserver> observer);
  void notify(std::string message);

private:
  std::vector<std::shared_ptr<AObserver>> m_observers;
};
