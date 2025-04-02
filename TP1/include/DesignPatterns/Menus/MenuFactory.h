#pragma once

#include "DesignPatterns/Menus/AMenu.h"

#include <functional>
#include <memory>

class MenuFactory
{
public:
  using Creator = std::function<std::unique_ptr<AMenu>()>;

  MenuFactory();

  std::unique_ptr<AMenu>   create(const std::string &name) const;
  std::vector<std::string> available_menus() const;

private:
  std::unordered_map<std::string, Creator> m_menu_registry;
};
