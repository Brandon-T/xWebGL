#include <windows.h>
#include "Exports.hpp"

extern "C" bool __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(hinstDLL);
            return Initialize();

        case DLL_PROCESS_DETACH:
            DeInitialize();
            break;

        default:
            break;
    }
    return true;
}
