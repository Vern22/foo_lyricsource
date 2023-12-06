// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

//#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#define _WIN32_WINNT _WIN32_WINNT_VISTA

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#endif

// c includes

// c++ includes
#include <list>
#include <vector>
#include <map>


// foobar2000 includes
#include  <pfc/pfc.h>
//You may need to change this depending on your folder layouts.
//#include "../../foobar-2000-SDKs/foobar2000/SDK/foobar2000.h"
#include <helpers/foobar2000+atl.h>

// Window includes
#include <windows.h>
#include <commctrl.h>
#include <wininet.h> 

// Note: GDI+ text rendering is much slower than GDI even on Win Vista/7
#include <gdiplus.h>
#pragma comment(lib, "comctl32.lib")
#pragma comment(lib, "wininet.lib") 
#pragma comment(lib, "gdiplus.lib")
#pragma comment(lib, "winmm.lib")



#include "../lyric_source_sdk/lyric_source_sdk/lyric_source_sdk.h"
//#pragma comment(lib, "../../Foobar SDK/foobar2000/shared/shared.lib" )


