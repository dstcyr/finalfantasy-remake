#include "Menu.h"
#include "Engine.h"
#include "Log.h"

void Menu::OnEnter()
{
    LOG(LL_DEBUG, "Menu::OnEnter");

#if MENU_MOCKUP
    m_menuMockup = Engine::LoadTexture("Assets/Design/menu.png");
#endif
}

void Menu::OnUpdate(float dt)
{
}

void Menu::OnRender()
{
#if MENU_MOCKUP
    Engine::DrawTexture(m_menuMockup, 0.0f, 0.0f, NColor(255, 255, 255, 50));
#endif
}

void Menu::OnExit()
{
}
