#include "Menu.h"
#include "Engine.h"
#include "Log.h"
#include "UI/UIImage.h"

std::shared_ptr<UIImage> test;

void Menu::OnEnter()
{
    LOG(LL_DEBUG, "Menu::OnEnter");

    test = UIImage::Create("Assets/Images/life.png");

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

    test->Draw(100.0F, 100.0F);
}

void Menu::OnExit()
{
}
