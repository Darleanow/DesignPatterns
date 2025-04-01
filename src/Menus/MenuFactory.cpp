#include "DesignPatterns/Menus/MenuFactory.h"
#include "DesignPatterns/Menus/LargeMenu.h"
#include "DesignPatterns/Menus/MediumMenu.h"
#include "DesignPatterns/Menus/SmallMenu.h"

MenuFactory::MenuFactory()
{
  m_menu_registry["Small Menu"] = std::move([] {
    auto menu = std::make_unique<SmallMenu>();
    return menu;
  });

  m_menu_registry["Medium Menu"] = std::move([] {
    auto menu = std::make_unique<MediumMenu>();
    return menu;
  });

  m_menu_registry["Large Menu"] = std::move([] {
    auto menu = std::make_unique<LargeMenu>();
    return menu;
  });
}

std::unique_ptr<AMenu> MenuFactory::create(const std::string &name) const
{
  if(auto it = m_menu_registry.find(name); it != m_menu_registry.end()) {
    return it->second();
  }

  throw std::runtime_error("Menu not found: " + name);
}

std::vector<std::string> MenuFactory::available_menus() const
{
  std::vector<std::string> names;

  for(const auto &[key, _] : m_menu_registry) {
    names.push_back(key);
  }

  return names;
}
