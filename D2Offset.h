#pragma once

/********************************************************************************
*                                                                               *
*   BaseDll Address defination                                                  *
*                                                                               *
*********************************************************************************/

static const DWORD DLLBASE_BNCLIENT		= (DWORD)GetModuleHandle("Bnclient.dll");
static const DWORD DLLBASE_D2CLIENT		= (DWORD)GetModuleHandle("D2Client.dll");
static const DWORD DLLBASE_D2CMP		= (DWORD)GetModuleHandle("D2CMP.dll");
static const DWORD DLLBASE_D2COMMON		= (DWORD)GetModuleHandle("D2Common.dll");
static const DWORD DLLBASE_D2DDRAW		= (DWORD)GetModuleHandle("D2DDraw.dll");
static const DWORD DLLBASE_D2DIRECT3D	= (DWORD)GetModuleHandle("D2Direct3D.dll");
static const DWORD DLLBASE_D2GAME		= (DWORD)GetModuleHandle("D2Game.dll");
static const DWORD DLLBASE_D2GDI		= (DWORD)GetModuleHandle("D2Gdi.dll");
static const DWORD DLLBASE_D2GFX		= (DWORD)GetModuleHandle("D2Gfx.dll");
static const DWORD DLLBASE_D2GLIDE		= (DWORD)GetModuleHandle("D2Glide.dll");
static const DWORD DLLBASE_D2LANG		= (DWORD)GetModuleHandle("D2Lang.dll");
static const DWORD DLLBASE_D2LAUNCH		= (DWORD)GetModuleHandle("D2Launch.dll");
static const DWORD DLLBASE_D2MCPCLIENT	= (DWORD)GetModuleHandle("D2MCPClient.dll");
static const DWORD DLLBASE_D2MULTI		= (DWORD)GetModuleHandle("D2Multi.dll");
static const DWORD DLLBASE_D2NET		= (DWORD)GetModuleHandle("D2Net.dll");
static const DWORD DLLBASE_D2SOUND		= (DWORD)GetModuleHandle("D2Sound.dll");
static const DWORD DLLBASE_D2WIN		= (DWORD)GetModuleHandle("D2Win.dll");
static const DWORD DLLBASE_FOG			= (DWORD)GetModuleHandle("Fog.dll");
static const DWORD DLLBASE_STORM		= (DWORD)GetModuleHandle("Storm.dll");
static const DWORD DLLBASE_IJL11		= (DWORD)GetModuleHandle("ijl11.dll");
static const DWORD DLLBASE_BINKW32		= (DWORD)GetModuleHandle("binkw32.dll");
static const DWORD DLLBASE_SMACKW32		= (DWORD)GetModuleHandle("SmackW32.dll");


struct DLLBaseStrc
{
	LPCSTR szName;
	DWORD dwAddress;
};

struct DLLPatchStrc
{
	int nDLL;
	DWORD dwAddress;
	DWORD dwData;
	BOOL bRelative;
	size_t nPatchSize;
};

enum D2TEMPLATE_DLL_FILES
{
	D2DLL_BINKW32,
	D2DLL_BNCLIENT,
	D2DLL_D2CLIENT,
	D2DLL_D2CMP,
	D2DLL_D2COMMON,
	D2DLL_D2DDRAW,
	D2DLL_D2DIRECT3D,
	D2DLL_D2GAME,
	D2DLL_D2GDI,
	D2DLL_D2GFX,
	D2DLL_D2GLIDE,
	D2DLL_D2LANG,
	D2DLL_D2LAUNCH,
	D2DLL_D2MCPCLIENT,
	D2DLL_D2MULTI,
	D2DLL_D2NET,
	D2DLL_D2SOUND,
	D2DLL_D2WIN,
	D2DLL_FOG,
	D2DLL_IJL11,
	D2DLL_SMACKW32,
	D2DLL_STORM,
	D2DLL_INVALID
};

static DLLBaseStrc gptDllFiles[] =
{
	{"Binkw32.dll",         NULL},
	{"BnClient.dll",        NULL},
	{"D2Client.dll",        NULL},
	{"D2CMP.dll",           NULL},
	{"D2Common.dll",        NULL},
	{"D2DDraw.dll",         NULL},
	{"D2Direct3D.dll",      NULL},
	{"D2Game.dll",          NULL},
	{"D2Gdi.dll",           NULL},
	{"D2Gfx.dll",           NULL},
	{"D2Glide.dll",         NULL},
	{"D2Lang.dll",          NULL},
	{"D2Launch.dll",        NULL},
	{"D2MCPClient.dll",     NULL},
	{"D2Multi.dll",         NULL},
	{"D2Net.dll",           NULL},
	{"D2Sound.dll",         NULL},
	{"D2Win.dll",           NULL},
	{"Fog.dll",             NULL},
	{"Ijl11.dll",           NULL},
	{"SmackW32.dll",        NULL},
	{"Storm.dll",           NULL},
};