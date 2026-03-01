#include "DLLmain.h"

///////////////////////////////////////////////////////////////////////////////////////////////////
// D2Client
///////////////////////////////////////////////////////////////////////////////////////////////////

__declspec(naked) AutomapLayer* __fastcall D2CLIENT_InitAutomapLayer_STUB(DWORD nLayerNo)
{
	__asm
	{
		push eax;
		mov eax, ecx;
		call D2CLIENT_InitAutomapLayer_I;
		pop eax;
		ret;
	}
}

__declspec(naked) wchar_t* __fastcall D2CLIENT_GetUnitName_STUB(DWORD UnitAny)
{
	__asm
	{
		mov eax, ecx
		jmp D2CLIENT_GetUnitName_I
	}
}

__declspec(naked) DWORD __fastcall D2CLIENT_GetUIVar_STUB(DWORD varno)
{
	__asm
	{
		mov eax, ecx;
		jmp D2CLIENT_GetUiVar_I;
	}
}

__declspec(naked) void __fastcall D2CLIENT_SetSelectedUnit_STUB(DWORD UnitAny)
{
	__asm
	{
		mov eax, ecx
		jmp D2CLIENT_SetSelectedUnit_I
	}
}

__declspec(naked) void __fastcall D2CLIENT_Interact_ASM(DWORD Struct)
{
	__asm {
		mov esi, ecx
		jmp D2CLIENT_Interact_I
	}
}

__declspec(naked) DWORD __fastcall D2CLIENT_ClickParty_ASM(DWORD RosterUnit, DWORD Mode)
{
	__asm
	{
		mov eax, ecx
		jmp D2CLIENT_ClickParty_I
	}
}

__declspec(naked) void __fastcall D2CLIENT_ShopAction_ASM(DWORD pItem, DWORD pNpc, DWORD pNPC, DWORD _1, DWORD pTable2 /* Could be also the ItemCost?*/, DWORD dwMode, DWORD _2, DWORD _3)
{
	__asm {
		jmp D2CLIENT_ShopAction_I
	}
}

__declspec(naked) void __fastcall D2CLIENT_ClickBelt(DWORD x, DWORD y, Inventory* pInventoryData)
{
	__asm {
		mov eax, edx
		jmp D2CLIENT_ClickBelt_I
	}
}

__declspec(naked) void __fastcall D2CLIENT_ClickItemRight_ASM(DWORD x, DWORD y, DWORD Location, DWORD Player, DWORD pUnitInventory)
{
	__asm
	{
		// ECX = y, EDX = x - Blizzard is weird :D
		MOV EAX, ECX
		MOV ECX, EDX
		MOV EDX, EAX

		POP EAX
		MOV EBX, EAX
		POP EAX
		PUSH EBX
		jmp D2CLIENT_ClickItemRight_I
	}
}

__declspec(naked) void __fastcall D2CLIENT_ClickBeltRight_ASM(DWORD pInventory, DWORD pPlayer, DWORD HoldShift, DWORD dwPotPos)
{
	__asm
	{
		POP EAX
		MOV EBX, EAX
		POP EAX
		PUSH EBX
		JMP D2CLIENT_ClickBeltRight_I
	}
}

__declspec(naked) void __fastcall D2CLIENT_GetItemDesc_ASM(DWORD pUnit, wchar_t* pBuffer)
{
	__asm
	{
		PUSH EDI
		MOV EDI, EDX
		PUSH NULL
		PUSH 1		// TRUE = New lines, FALSE = Comma between each stat value
		PUSH ECX
		CALL D2CLIENT_GetItemDesc_I
		POP EDI
		RETN
	}
}

__declspec(naked) void __fastcall D2CLIENT_MercItemAction_ASM(DWORD bPacketType, DWORD dwSlot)
{
	__asm
	{
		mov eax, ecx
		mov ecx, edx
		jmp D2CLIENT_MercItemAction_I
	}
}

__declspec(naked) void __fastcall D2CLIENT_PlaySound_Stub(int SoundNo)
{
	__asm
	{
		push ebx
		mov ebx, ecx
		push 0
		push 0
		push 0
		push 0
		call D2CLIENT_PlaySoundNo_I
		pop ebx;
		ret
	}
}

__declspec(naked) void __stdcall D2CLIENT_TakeWaypoint(DWORD dwWaypointId, DWORD dwArea)
{
	__asm
	{
		PUSH EBP
		MOV EBP, ESP
		SUB ESP, 0x20
		PUSH EBX
		PUSH ESI
		PUSH EDI
		AND DWORD PTR SS : [EBP - 0x20], 0
		PUSH 0
		CALL _TakeWaypoint
		JMP _Exit

		_TakeWaypoint :
		PUSH EBP
			PUSH ESI
			PUSH EDI
			PUSH EBX
			XOR EDI, EDI
			MOV EBX, 1
			MOV ECX, DWORD PTR SS : [EBP + 8]
			MOV EDX, DWORD PTR SS : [EBP + 0xC]
			LEA EBP, DWORD PTR SS : [EBP - 0x20]
			JMP[D2CLIENT_TakeWaypoint_I]


		_Exit :
			POP EDI
			POP ESI
			POP EBX
			LEAVE
			RETN 8
	}
}

__declspec(naked) DWORD __fastcall D2CLIENT_TestPvpFlag_STUB(DWORD planum1, DWORD planum2, DWORD flagmask)
{
	__asm
	{
		push esi;
		push[esp + 8];
		mov esi, edx;
		mov edx, ecx;
		call D2CLIENT_TestPvpFlag_I;
		pop esi;
		ret 4;
	}
}

/*			   */ DWORD __cdecl D2CLIENT_GetMinionCount(UnitAny* pUnit, DWORD dwType)
{
	DWORD dwResult;

	__asm
	{
		push eax
		push esi
		mov eax, pUnit
		mov esi, dwType
		call D2CLIENT_GetMinionCount_I
		mov[dwResult], eax
		pop esi
		pop eax
	}

	return dwResult;
}

__declspec(naked) void __fastcall D2CLIENT_HostilePartyUnit(RosterUnit* pUnit, DWORD dwButton)
{
	__asm
	{
		mov eax, edx
		jmp[D2CLIENT_ClickParty_II]
	}
}

__declspec(naked) DWORD __fastcall D2CLIENT_SendGamePacket_ASM(DWORD dwLen, BYTE* bPacket)
{
	__asm
	{
		push ebx
		mov ebx, ecx
		push edx
		call D2CLIENT_SendGamePacket_I
		pop ebx
		ret
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////
// D2Common
///////////////////////////////////////////////////////////////////////////////////////////////////

__declspec(naked) void __fastcall D2COMMON_DisplayOverheadMsg_ASM(DWORD pUnit)
{
	__asm
	{
		LEA ESI, [ECX + 0xA4]
		MOV EAX, [ECX + 0xA4]

		PUSH EAX
		PUSH 0
		call D2COMMON_DisplayOverheadMsg_I

		RETN
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////
// D2Gfx
///////////////////////////////////////////////////////////////////////////////////////////////////

__declspec(naked) void __fastcall D2GFX_DrawRectFrame_STUB(RECT* rect)
{
	__asm
	{
		mov eax, ecx;
		jmp D2CLIENT_DrawRectFrame;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////
// D2Game
///////////////////////////////////////////////////////////////////////////////////////////////////

__declspec(naked) UnitAny* __fastcall D2GAME_CreateRewardItem_Stub(DWORD pGame, UnitAny* pUnit, DWORD dwCode, int nItemLevel, int nQuality, BOOL bDrop)
{
	/*
		push bDrop
		push nQuality
		push pGame
		mov eax, dwCode
		mov edx, pUnit
		mov ecx, nItemLevel
		call D2GAME_6FC56470
	*/

	__asm
	{
		push[esp + 0x10]		//bDrop
		push[esp + 0x10]		//nQuality
		push ecx				//pGame
		//pUnit已经在EDX里了 不用移动了呢~
		mov ecx, [esp + 0x10]	//nItemLevel
		mov eax, [esp + 0x14]	//dwCode
		call D2GAME_CreateRewardItem_I
		retn 0x10
	}
}

__declspec(naked) BOOL __fastcall D2GAME_DeleteItem_Stub(DWORD pGame, UnitAny* pPlayer, UnitAny* pItem)
{
	__asm
	{
		push ecx					//pItem
		mov ecx, edx				//pPlayer
		mov eax, [esp + 0x08]		//pGame
		call D2GAME_DeleteItem_I
		retn 0x04
	}
}

__declspec(naked) void __fastcall D2GAME_UpdateClientItemStat_Stub(ClientData* pClient, UnitAny* pItem, BOOL bSetStat, short nStat, int nValue)
{
	_asm
	{
		push[esp + 0x0C]	//nValue
		push[esp + 0x0C]	//nStat
		push[esp + 0x0C]	//bool
		push ecx			//pItem
		mov eax, edx		//pClient
		call D2GAME_UpdateClientItemStat_I
		retn 0x0C
	}
}

__declspec (naked) DRLGRoom* __fastcall D2GAME_GetFreeCoordx_Stub(DRLGRoom* pRoom, DRLGCoord* pSourceCoord, DRLGCoord* pOutputCoord, BOOL b4)
{
	__asm
	{
		push esi
		push[esp + 0x0C]
		push[esp + 0x0C]
		push ecx
		mov esi, edx
		call D2GAME_GetFreeCoordx_I	//TODO:Find location in 1.13d
		pop esi
		retn 0x08
	}
}

__declspec (naked) UnitAny* __fastcall D2GAME_CreateUnit_Stub(DWORD pGame, DRLGRoom* pRoom, int nClass, int nType, int nXpos, int nYpos, int nA7, int nA8, int nA9)
{
	__asm
	{
		push[esp + 0x1C]
		push[esp + 0x1C]
		push[esp + 0x1C]
		push edx
		push ecx
		push[esp + 0x24]
		push[esp + 0x24]
		mov edx, [esp + 0x20]
		mov ecx, [esp + 0x24]
		call D2GAME_CreateUnit_I	//TODO:Find location in 1.13d
		retn 0x1C
	}
}

__declspec(naked) void __stdcall D2GAME_UpdateBonuses_Stub(UnitAny *pUnit)
{
	__asm
	{
		push ebx

		mov ebx, [esp + 8]

		call D2GAME_UpdateBonuses_I

		pop ebx

		ret 4
	}
}

__declspec(naked) void __fastcall D2GAME_UpdatePlayerStats_Stub(DWORD pGame, UnitAny* pPlayer, BYTE nAct)
{
	__asm {
		MOVZX EAX, [ESP + 0x04]		// nAct
		push ecx					// pGame  arg1 to func
		mov ecx, edx				// pPlayer
		call D2GAME_UpdatePlayerStats_I			// pointer to 6FD0DD8
		retn 0x04
	}
}

__declspec(naked) void __fastcall D2GAME_SetSkills_Stub(int SkillId, UnitAny* pUnit, int SkillLvl, DWORD dwflag)
{
	__asm
	{
		push esi

		mov eax, ecx
		mov esi, edx

		push[esp + 12]
		push[esp + 12]

		call D2GAME_SetSkill_I

		pop esi

		ret 8
	}
}

__declspec(naked) void __stdcall D2GAME_Send0x21_UpdateSkills_Stub(ClientData* pClient, int SkillId, UnitAny* pUnit, BYTE a3, BYTE a4)
{
	__asm
	{
		push esi
		push ebx

		mov eax, [esp + 4 + 8]
		mov bx, [esp + 8 + 8]
		mov esi, [esp + 12 + 8]
		push[esp + 20 + 8]
		push[esp + 20 + 8]

		call D2GAME_Send0x21_I

		pop ebx
		pop esi

		ret 20

	}
}