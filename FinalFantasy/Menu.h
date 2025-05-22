#pragma once
#include "Config.h"
#include "StateMachine.h"

class Menu : public IState
{
public:
    void OnEnter() override;
    void OnUpdate(float dt) override;
    void OnRender() override;
    void OnExit() override;

private:

#if MENU_MOCKUP
    size_t m_menuMockup = 0;
#endif
};