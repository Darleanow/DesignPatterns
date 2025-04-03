#include "DesignPatterns/Observer/FranceObserver.h"
#include "DesignPatterns/Observer/UnitedStatesObserver.h"
#include "DesignPatterns/Subject/Subject.h"

int main() {
  Subject subject;

  subject.add(std::make_shared<FranceObserver>());
  subject.add(std::make_shared<UnitedStatesObserver>());

  subject.notify("15");
}
