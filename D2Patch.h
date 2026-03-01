#pragma once

#ifndef _D2PATCH_H
#define _D2PATCH_H

#include "D2PatchConst.h"

/****************************************************************************
*                                                                           *
*   D2Patch.h                                                               *
*   Copyright (C) Olivier Verville                                          *
*                                                                           *
*   Licensed under the Apache License, Version 2.0 (the "License");         *
*   you may not use this file except in compliance with the License.        *
*   You may obtain a copy of the License at                                 *
*                                                                           *
*   http://www.apache.org/licenses/LICENSE-2.0                              *
*                                                                           *
*   Unless required by applicable law or agreed to in writing, software     *
*   distributed under the License is distributed on an "AS IS" BASIS,       *
*   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.*
*   See the License for the specific language governing permissions and     *
*   limitations under the License.                                          *
*                                                                           *
*---------------------------------------------------------------------------*
*                                                                           *
*   https://github.com/olivier-verville/D2Template                          *
*                                                                           *
*   This file is where you declare all your patches, in order to inject     *
*   your own code into the game. Each patch should be declared in the       *
*   array, in order to be handled by D2Template's patcher                   *
*                                                                           *
*****************************************************************************/

//struct DLLPatchStrc
//{
//	int nDLL;
//	DWORD dwAddress;
//	DWORD dwData;
//	BOOL bRelative;
//	size_t nPatchSize;
//};

//相对位置模式下将会从所指位置的下一位进行内存修改
static const DLLPatchStrc gptTemplatePatches[] =
{

	//拓展pSpellTbl 
	{D2DLL_D2GAME, 0x107330, (DWORD)PSPELLTABLE_MAX_SIZE, FALSE, 0x00},
	{D2DLL_D2GAME, 0xAD184, (DWORD)Extend_pSpellTbl, FALSE, 0x00},
	{D2DLL_D2GAME, 0xAD18D, (DWORD)Extend_pSpellTbl, FALSE, 0x00},
	{D2DLL_D2GAME, 0xAD213, (DWORD)Extend_pSpellTbl + 4u, FALSE, 0x00},
	{D2DLL_D2GAME, 0xAD21C, (DWORD)Extend_pSpellTbl + 4u, FALSE, 0x00},


	{D2DLL_INVALID} // this must be the last entry in the array!
};
// end of file --------------------------------------------------------------
#endif

