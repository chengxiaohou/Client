#include "pch.h"
#include "common.h"
#include "frida-gum.h"
#include "tools.h"

void itemInventoryWinInit(void) {
    GumInterceptor* v = gum_interceptor_obtain();
    *(BYTE*)0x006C134E = 0x1D;
    writeNopCode((void*)0x006C00FB, 6);
}