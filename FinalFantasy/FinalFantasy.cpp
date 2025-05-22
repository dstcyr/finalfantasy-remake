#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <string>
#include "StateMachine.h"
#include "Engine.h"
#include "Config.h"
#include "Menu.h"

INT WINAPI WinMain(HINSTANCE _In_ hInst, HINSTANCE _In_opt_ hPrev, PSTR _In_ cmd, INT _In_ flag)
{
    std::string title = "Final Fantasy Remake";

#if CREATE_DEBUG_CONSOLE
    AllocConsole();
    int _r = freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
    if (_r != 0)
    {
        OutputDebugString("error: can't allocate console");
    }

    title += " - DEBUG";
#endif

    StateMachine fsm;
    fsm.Add("menu", new Menu());

    Engine::Initialize(title.c_str(), SCREEN_WIDTH, SCREEN_HEIGHT);

    fsm.SetState("menu");
    Engine::EnterGameLoop(&fsm);

#if CREATE_DEBUG_CONSOLE
#if PAUSE_CONSOLE_WHEN_CLOSING
    LOG(LL_VERBOSE, "Press any key to continue...");
    int r = _getch();
#endif
    FreeConsole();
#endif

    return 0;
}
