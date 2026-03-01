#pragma once

#ifndef _D2STAUBS_H
#define _D2STAUBS_H

AutomapLayer* __fastcall D2CLIENT_InitAutomapLayer_STUB(DWORD nLayerNo);
wchar_t* __fastcall D2CLIENT_GetUnitName_STUB(DWORD UnitAny);
DWORD __fastcall D2CLIENT_GetUIVar_STUB(DWORD varno);
//DWORD __fastcall D2CLIENT_LoadUIImage_ASM(char* Path);
void  __fastcall D2CLIENT_SetSelectedUnit_STUB(DWORD UnitAny);
void  __fastcall D2CLIENT_Interact_ASM(DWORD Struct);
DWORD __fastcall D2CLIENT_ClickParty_ASM(DWORD RosterUnit, DWORD Mode);
void  __fastcall D2CLIENT_ShopAction_ASM(DWORD pTable, DWORD pItem, DWORD pNPC, DWORD _1, DWORD pTable2 /* Could be also the ItemCost?*/, DWORD dwMode, DWORD _2, DWORD _3);
void  __fastcall D2CLIENT_ClickItemRight_ASM(DWORD x, DWORD y, DWORD Location, DWORD pItem, DWORD pItemPath);
void  __fastcall D2CLIENT_ClickBelt(DWORD x, DWORD y, Inventory* pInventoryData);
void  __fastcall D2CLIENT_ClickBeltRight_ASM(DWORD pInventory, DWORD pPlayer, DWORD HoldShift, DWORD dwPotPos);
void  __fastcall D2CLIENT_GetItemDesc_ASM(DWORD pUnit, wchar_t* pBuffer);
void  __fastcall D2CLIENT_MercItemAction_ASM(DWORD bPacketType, DWORD dwSlot);
//DWORD __fastcall D2CLIENT_LoadUIImage_ASM(char* lpszPath);
void __fastcall D2CLIENT_PlaySound_Stub(int dwSoundId);
DWORD __fastcall D2CLIENT_TestPvpFlag_STUB(DWORD planum1, DWORD planum2, DWORD flagmask);
DWORD __cdecl D2CLIENT_GetMinionCount(UnitAny* pUnit, DWORD dwType);
void __fastcall D2CLIENT_HostilePartyUnit(RosterUnit* pUnit, DWORD dwButton);
void __stdcall D2CLIENT_TakeWaypoint(DWORD dwWaypointId, DWORD dwArea);
DWORD __fastcall D2CLIENT_SendGamePacket_ASM(DWORD dwLen, BYTE* bPacket);

void  __fastcall D2COMMON_DisplayOverheadMsg_ASM(DWORD pUnit);
void __fastcall D2GFX_DrawRectFrame_STUB(RECT* rect);

UnitAny* __fastcall D2GAME_CreateRewardItem_Stub(DWORD pGame, UnitAny* pUnit, DWORD dwCode, int nItemLevel, int nQuality, BOOL bDrop);
BOOL __fastcall D2GAME_DeleteItem_Stub(DWORD pGame, UnitAny* pPlayer, UnitAny* pItem);
void __fastcall D2GAME_UpdateClientItemStat_Stub(ClientData* pClient, UnitAny* pItem, BOOL bSetStat, short nStat, int nValue);

DRLGRoom* __fastcall D2GAME_GetFreeCoordx_Stub(DRLGRoom * pRoom, DRLGCoord * pSourceCoord, DRLGCoord * pOutputCoord, BOOL b4);
UnitAny* __fastcall D2GAME_CreateUnit_Stub(DWORD pGame, DRLGRoom * pRoom, int nClass, int nType, int nXpos, int nYpos, int nA7, int nA8, int nA9);

void __stdcall D2GAME_UpdateBonuses_Stub(UnitAny * pUnit);

void __fastcall D2GAME_UpdatePlayerStats_Stub(DWORD pGame, UnitAny* pPlayer, BYTE nAct);

void __fastcall D2GAME_SetSkills_Stub(int SkillId, UnitAny * pUnit, int SkillLvl, DWORD dwflag);

void __stdcall D2GAME_Send0x21_UpdateSkills_Stub(ClientData * pClient, int SkillId, UnitAny * pUnit, BYTE a3, BYTE a4);

#endif