#include "Placement.h"
#include <Windows.h>

using namespace Battleship;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Placement);
    return 0;
}