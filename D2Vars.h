#ifdef _D2VARS_H
#define VAR(Type, Name)         Type Name;
#else
#define VAR(Type, Name)         extern Type Name;
#endif

/****************************************************************************
*                                                                           *
*   D2Vars.h                                                                *
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
*   This file is used to declare your own global variables to use           *
*   within your code. These variables can be used anywhere in your code     *
*                                                                           *
*****************************************************************************/

//Max Save size
#define SAVEFILE_MAX_SIZE			0x00006000
//Max DescFuncTable size
#define DESCFUNCTABLE_MAX_SIZE		0x0000001D
//Max pSpellTable size
#define PSPELLTABLE_MAX_SIZE		0x0000001F

static const char* DEFAULT_CONFIG_PATH = "D2Ext.ini";
static const char* SECTION_NAME = "D2Ext";

struct Configuration
{
	int iVotLifeStatNo;
	int iVotCode;

	int iBagItemNo;
	int iBagStatNo;
	int iBagItemDesc;
	int iBagEmptyDesc;

	int iReforgeStatNo;
	double dSPLevelBounsFactor;
	double dSPCountBounsFactor;
	int iSPBounsModify;
	double dAPLevelBounsFactor;
	double dAPCountBounsFactor;
	int iAPBounsModify;

	int iEtherealItemRate;

	int iMaxGambleCost;

	int bMoveCorpseToTown;
};

VAR(void*, Extend_DescFuncTbl[DESCFUNCTABLE_MAX_SIZE])
VAR(D2ItemSpellTableStrc, Extend_pSpellTbl[PSPELLTABLE_MAX_SIZE])
VAR(Configuration, Config)

void __fastcall Config_Load();

// end of file ---------------------------------------------------------------
#undef _D2VARS_H