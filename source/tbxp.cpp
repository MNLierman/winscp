//---------------------------------------------------------------------------
#pragma warn -pch // WORKAROUND (see My.cpp)
#include <vcl.h>
#pragma hdrstop
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Package source.
//---------------------------------------------------------------------------

#pragma argsused
int WINAPI DllEntryPoint(HINSTANCE hinst, unsigned long reason, void*)
{
        return 1;
}
//---------------------------------------------------------------------------
