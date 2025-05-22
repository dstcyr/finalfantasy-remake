#pragma once

#define SAFE_DELETE(ptr) if(ptr) { delete ptr; ptr = nullptr; }

const int SCREEN_WIDTH = 1024;
const int SCREEN_HEIGHT = 962;

#if defined(_DEBUG)
#define CHECK_MEMORY_LEAKS 0
#define CREATE_DEBUG_CONSOLE 1
#define PAUSE_CONSOLE_WHEN_CLOSING 0
#define MENU_MOCKUP 1
#else

#define CHECK_MEMORY_LEAKS 0
#define CREATE_DEBUG_CONSOLE 0
#define PAUSE_CONSOLE_WHEN_CLOSING 0
#define MENU_MOCKUP 0

#endif





