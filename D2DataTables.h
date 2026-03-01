#pragma once

#ifndef _D2DATATABLES_H
#define _D2DATATABLES_H

#pragma pack(1)

/****************************************************************************
*                                                                           *
*   D2DataTables.h                                                          *
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
*   This file is an expansion of D2Structs.h, meant to be used to declare   *
*   structs representing the record of a data table once loaded in memory   *
*   by the game, such as Monstats.txt or Charstats.txt                      *
*                                                                           *
*****************************************************************************/

/****************************************************************************
*                                                                           *
* DECLARATIONS                                                              *
*                                                                           *
*****************************************************************************/

//struct D2MonstatsTXT;

/****************************************************************************
*                                                                           *
* DEFINITIONS                                                               *
*                                                                           *
*****************************************************************************/

struct LevelTxt {
	DWORD dwLevelNo;				//0x00
	DWORD _1[60];					//0x04
	BYTE _2;						//0xF4
	char szName[40];				//0xF5
	char szEntranceText[40];		//0x11D
	char szLevelDesc[41];			//0x145
	wchar_t wName[40];				//0x16E
	wchar_t wEntranceText[40];		//0x1BE
	BYTE nObjGroup[8];				//0x196
	BYTE nObjPrb[8];				//0x19E
};

struct MonsterTxt {
	BYTE _1[0x6];					//0x00
	WORD nLocaleTxtNo;				//0x06
	WORD flag;						//0x08
	WORD _1a;						//0x0A
	union {
		DWORD flag1;				//0x0C
		struct {
			BYTE flag1a;			//0x0C
			BYTE flag1b;			//0x0D
			BYTE flag1c[2];			//0x0E
		};
	};
	BYTE _2[0x22];					//0x10
	WORD velocity;					//0x32
	BYTE _2a[0x52];					//0x34
	WORD tcs[3][4];					//0x86
	BYTE _2b[0x52];					//0x9E
	wchar_t szDescriptor[0x3c];		//0xF0
	BYTE _3[0x1a0];					//0x12C
};

struct ObjectTxt {
	char szName[0x40];				//0x00
	wchar_t wszName[0x40];			//0x40
	BYTE _1[4];						//0xC0
	BYTE nSelectable0;				//0xC4
	BYTE _2[0x87];					//0xC5
	BYTE nOrientation;				//0x14C
	BYTE _2b[0x19];					//0x14D
	BYTE nSubClass;					//0x166
	BYTE _3[0x11];					//0x167
	BYTE nParm0;					//0x178
	BYTE _4[0x39];					//0x179
	BYTE nPopulateFn;				//0x1B2
	BYTE nOperateFn;				//0x1B3
	BYTE _5[8];						//0x1B4
	DWORD nAutoMap;					//0x1BB
};


struct CharStatsTxt
{
	char	szwClass[32];	//0x0
	char	szClass[15];	//0x20
	BYTE	bStr;	//0x30
	BYTE	bDex;	//0x31
	BYTE	bEne;	//0x32
	BYTE	bVita;	//0x33
	BYTE	bStamina;	//0x34
	BYTE	bHpAdd;	//0x35
	BYTE	bPercentStr;	//0x36
	BYTE	bPercentInt;	//0x37
	BYTE	bPercentDex;	//0x38
	BYTE	bPercentVit;	//0x39
	BYTE	bManaRegen;	//0x3A
	BYTE 	_1;			//0x3B
	DWORD	dwToHitFactor;	//0x3C
	BYTE	bWalkVelocity;	//0x40
	BYTE	bRunVelocity;	//0x41
	BYTE	bRunDrain;	//0x42
	BYTE	bLifePerLevel;	//0x43
	BYTE	bStaminaPerLevel;	//0x44
	BYTE	bManaPerLevel;	//0x45
	BYTE	bLifePerVitality;	//0x46
	BYTE	bStaminaPerVitality;	//0x47
	BYTE	bManaPerMagic;	//0x48
	BYTE	bBlockFactor;	//0x49
	BYTE	_2[2];			//0x4A
	DWORD	dwBaseWClass;	//0x4C
	BYTE	bStatPerLevel;	//0x50
	BYTE	_3;				//0x51
	WORD	wStrAllSkills;	//0x52
	WORD	wStrSkillTab1;	//0x54
	WORD	wStrSkillTab2;	//0x56
	WORD	wStrSkillTab3;	//0x58
	WORD	wStrClassOnly;	//0x5A
	DWORD	dwItem1;	//0x5C
	BYTE	bItem1loc;	//0x60
	BYTE	bItem1count;	//0x61
	BYTE	_4[2];			//0x62
	DWORD	dwItem2;	//0x64
	BYTE	bItem2loc;	//0x68
	BYTE	bItem2count;	//0x69
	BYTE	_5[2];			//0x6A
	DWORD	dwItem3;	//0x6C
	BYTE	bItem3loc;	//0x70
	BYTE	bItem3count;	//0x71
	BYTE	_6[2];			//0x72
	DWORD	dwItem4;	//0x74
	BYTE	bItem4loc;	//0x78
	BYTE	bItem4count;	//0x79
	BYTE	_7[2];			//0x7A
	DWORD	dwItem5;	//0x7C
	BYTE	bItem5loc;	//0x80
	BYTE	bItem5count;	//0x81
	BYTE	_8[2];			//0x82
	DWORD	dwItem6;	//0x84
	BYTE	bItem6loc;	//0x88
	BYTE	bItem6count;	//0x89
	BYTE	_9[2];			//0x8A
	DWORD	dwItem7;	//0x8C
	BYTE	bItem7loc;	//0x90
	BYTE	bItem7count;	//0x91
	BYTE	_10[2];			//0x92
	DWORD	dwItem8;	//0x94
	BYTE	bItem8loc;	//0x98
	BYTE	bItem8count;	//0x99
	BYTE	_11[2];			//0x9A
	DWORD	dwItem9;	//0x9C
	BYTE	bItem9loc;	//0xA0
	BYTE	bItem9count;	//0xA1
	BYTE	_12[2];			//0xA2
	DWORD	dwItem10;	//0xA4
	BYTE	bItem10loc;	//0xA8
	BYTE	bItem10count;	//0xA9
	BYTE	_13[2];			//0xAA
	WORD	wStartSkill;	//0xAC
	WORD	wSkill1;	//0xAE
	WORD	wSkill2;	//0xB0
	WORD	wSkill3;	//0xB2
	WORD	wSkill4;	//0xB4
	WORD	wSkill5;	//0xB6
	WORD	wSkill6;	//0xB8
	WORD	wSkill7;	//0xBA
	WORD	wSkill8;	//0xBC
	WORD	wSkill9;	//0xBE
	WORD	wSkill10;	//0xC0
};


struct ItemTxt //size = 0x1A8, Valid for Weapons, Armors, Misc.txts
{
	char	szFlippyFile[32];			//0x00
	char	szInvFile[32];				//0x20
	char	szUniqueInvFile[32];		//0x40
	char	szSetInvFile[32];			//0x60
	union
	{
		DWORD	dwCode;					//0x80
		char	szCode[4];				//0x80
	};
	DWORD	dwNormCode;					//0x84
	DWORD	dwUberCode;					//0x88
	DWORD	dwUltraCode;				//0x8C
	DWORD	dwAlternateGfx;				//0x90
	DWORD	dwPSpell;					//0x94
	WORD	wState;						//0x98
	WORD	wCState1;					//0x9A
	WORD	wCState2;					//0x9C
	WORD	wStat1;						//0x9E
	WORD	wStat2;						//0xA0
	WORD	wStat3;						//0xA2
	DWORD	dwCalc1;					//0xA4
	DWORD	dwCalc2;					//0xA8
	DWORD	dwCalc3;					//0xAC
	DWORD	dwLen;						//0xB0
	WORD	wSpellDesc;					//0xB4
	WORD	wSpellDescStr;				//0xB6
	DWORD	dwSpellDescCalc;			//0xB8
	DWORD	dwBetterGem;				//0xBC
	DWORD	dwWClass;					//0xC0
	DWORD	dw2HandedWClass;			//0xC4
	DWORD	dwTMogType;					//0xC8
	DWORD	dwMinAc;					//0xCC
	DWORD	dwMaxAc;					//0xD0
	DWORD	dwGambleCost;				//0xD4
	DWORD	dwSpeed;					//0xD8
	DWORD	dwBitfield1;				//0xDC
	DWORD	dwCost;						//0xE0
	DWORD	dwMinStack;					//0xE4
	DWORD	dwMaxStack;					//0xE8
	DWORD	dwSpawnStack;				//0xEC
	DWORD	dwGemOffset;				//0xF0
	WORD	wNameStr;					//0xF4
	WORD	wVersion;					//0xF6
	WORD	wAutoPrefix;				//0xF8
	WORD	wMissileType;				//0xFA
	BYTE	bRarity;					//0xFC
	BYTE	bLevel;						//0xFD
	BYTE	bMinDam;					//0xFE
	BYTE	bMaxDam;					//0xFF
	BYTE	bMinMisDam;					//0x100
	BYTE	bMaxMisDam;					//0x101
	BYTE	b2HandMinDam;				//0x102
	BYTE	b2HandMaxDam;				//0x103
	WORD	bRangeAdder;				//0x104
	WORD	wStrBonus;					//0x106
	WORD	wDexBonus;					//0x108
	WORD	wReqStr;					//0x10A
	WORD	wReqDex;					//0x10C
	BYTE	bAbsorbs;					//0x10E
	BYTE	bInvWidth;					//0x10F
	BYTE	bInvHeight;					//0x110
	BYTE	bBlock;						//0x111
	BYTE	bDurability;				//0x112
	BYTE	bNoDurability;				//0x113
	BYTE	bMissile;					//0x114
	BYTE	bComponent;					//0x115
	BYTE	bRArm;						//0x116
	BYTE	bLArm;						//0x117
	BYTE	bTorso;						//0x118
	BYTE	bLegs;						//0x119
	BYTE	bRSPad;						//0x11A
	BYTE	bLSPad;						//0x11B
	BYTE	b2Handed;					//0x11C
	BYTE	bUseable;					//0x11D
	WORD	wType;						//0x11E
	WORD	wType2;						//0x120
	WORD	bSubType;					//0x122
	WORD	wDropSound;					//0x124
	WORD	wUseSound;					//0x126
	BYTE	bDropSfxFrame;				//0x128
	BYTE	bUnique;					//0x129
	BYTE	bQuest;						//0x12A
	BYTE	bQuestDiffCheck;			//0x12B
	BYTE	bTransparent;				//0x12C
	BYTE	bTransTbl;					//0x12D
	BYTE 	pad0x12E;					//0x12E
	BYTE	bLightRadius;				//0x12F
	BYTE	bBelt;						//0x130
	BYTE	bAutoBelt;					//0x131
	BYTE	bStackable;					//0x132
	BYTE	bSpawnable;					//0x133
	BYTE	bSpellIcon;					//0x134
	BYTE	bDurWarning;				//0x135
	BYTE	bQntWarning;				//0x136
	BYTE	bHasInv;					//0x137
	BYTE	bGemSockets;				//0x138
	BYTE	bTransmogrify;				//0x139
	BYTE	bTMogMin;					//0x13A
	BYTE	bTMogMax;					//0x13B
	BYTE	bHitClass;					//0x13C
	BYTE	b1or2Handed;				//0x13D
	BYTE	bGemApplyType;				//0x13E
	BYTE	bLevelReq;					//0x13F
	BYTE	bMagicLvl;					//0x140
	BYTE	bTransform;					//0x141
	BYTE	bInvTrans;					//0x142
	BYTE	bCompactSave;				//0x143
	BYTE	bSkipName;					//0x144
	BYTE	bNameable;					//0x145
	BYTE	bAkaraMin;					//0x146
	BYTE	bGheedMin;					//0x147
	BYTE	bCharsiMin;					//0x148
	BYTE	bFaraMin;					//0x149
	BYTE	bLysanderMin;				//0x14A
	BYTE	bDrognanMin;				//0x14B
	BYTE	bHraltiMin;					//0x14C
	BYTE	bAlkorMin;					//0x14D
	BYTE	bOrmusMin;					//0x14E
	BYTE	bElzixMin;					//0x14F
	BYTE	bAshearaMin;				//0x150
	BYTE	bCainMin;					//0x151
	BYTE	bHalbuMin;					//0x152
	BYTE	bJamellaMin;				//0x153
	BYTE	bMalahMin;					//0x154
	BYTE	bLarzukMin;					//0x155
	BYTE	bDrehyaMin;					//0x156
	BYTE	bAkaraMax;					//0x157
	BYTE	bGheedMax;					//0x158
	BYTE	bCharsiMax;					//0x159
	BYTE	bFaraMax;					//0x15A
	BYTE	bLysanderMax;				//0x15B
	BYTE	bDrognanMax;				//0x15C
	BYTE	bHraltiMax;					//0x15D
	BYTE	bAlkorMax;					//0x15E
	BYTE	bOrmusMax;					//0x15F
	BYTE	bElzixMax;					//0x160
	BYTE	bAshearaMax;				//0x161
	BYTE	bCainMax;					//0x162
	BYTE	bHalbuMax;					//0x163
	BYTE	bJamellaMax;				//0x164
	BYTE	bMalahMax;					//0x165
	BYTE	bLarzukMax;					//0x166
	BYTE	bDrehyaMax;					//0x167
	BYTE	bAkaraMagicMin;				//0x168
	BYTE	bGheedMagicMin;				//0x169
	BYTE	bCharsiMagicMin;			//0x16A
	BYTE	bFaraMagicMin;				//0x16B
	BYTE	bLysanderMagicMin;			//0x16C
	BYTE	bDrognanMagicMin;			//0x16D
	BYTE	bHraltiMagicMin;			//0x16E
	BYTE	bAlkorMagicMin;				//0x16F
	BYTE	bOrmusMagicMin;				//0x170
	BYTE	bElzixMagicMin;				//0x171
	BYTE	bAshearaMagicMin;			//0x172
	BYTE	bCainMagicMin;				//0x173
	BYTE	bHalbuMagicMin;				//0x174
	BYTE	bJamellaMagicMin;			//0x175
	BYTE	bMalahMagicMin;				//0x176
	BYTE	bLarzukMagicMin;			//0x177
	BYTE	bDrehyaMagicMin;			//0x178
	BYTE	bAkaraMagicMax;				//0x179
	BYTE	bGheedMagicMax;				//0x17A
	BYTE	bCharsiMagicMax;			//0x17B
	BYTE	bFaraMagicMax;				//0x17C
	BYTE	bLysanderMagicMax;			//0x17D
	BYTE	bDrognanMagicMax;			//0x17E
	BYTE	bHraltiMagicMax;			//0x17F
	BYTE	bAlkorMagicMax;				//0x180
	BYTE	bOrmusMagicMax;				//0x181
	BYTE	bElzixMagicMax;				//0x182
	BYTE	bAshearaMagicMax;			//0x183
	BYTE	bCainMagicMax;				//0x184
	BYTE	bHalbuMagicMax;				//0x185
	BYTE	bJamellaMagicMax;			//0x186
	BYTE	bMalahMagicMax;				//0x187
	BYTE	bLarzukMagicMax;			//0x188
	BYTE	bDrehyaMagicMax;			//0x189
	BYTE	bAkaraMagicLvl;				//0x18A
	BYTE	bGheedMagicLvl;				//0x18B
	BYTE	bCharsiMagicLvl;			//0x18C
	BYTE	bFaraMagicLvl;				//0x18D
	BYTE	bLysanderMagicLvl;			//0x18E
	BYTE	bDrognanMagicLvl;			//0x18F
	BYTE	bHraltiMagicLvl;			//0x190
	BYTE	bAlkorMagicLvl;				//0x191
	BYTE	bOrmusMagicLvl;				//0x192
	BYTE	bElzixMagicLvl;				//0x193
	BYTE	bAshearaMagicLvl;			//0x194
	BYTE	bCainMagicLvl;				//0x195
	BYTE	bHalbuMagicLvl;				//0x196
	BYTE	bJamellaMagicLvl;			//0x197
	BYTE	bMalahMagicLvl;				//0x198
	BYTE	bLarzukMagicLvl;			//0x199
	BYTE	bDrehyaMagicLvl;			//0x19A
	BYTE	pad0x19B;					//0x19B
	DWORD	dwNightmareUpgrade;			//0x19C
	DWORD	dwHellUpgrade;				//0x1A0
	BYTE	bPermStoreItem;				//0x1A4
	BYTE	bMultibuy;					//0x1A5
	WORD	pad0x1A6;					//0x1A6
};

struct SkillsTxt //size 0x23C
{
	DWORD wSkillId; 			//0x00
	struct
	{
		BYTE bDecquant : 1;				//0
		BYTE bLob : 1;					//1
		BYTE bProgressive : 1;			//2
		BYTE bFinishing : 1;				//3
		BYTE bPassive : 1;				//4
		BYTE bAura : 1;					//5
		BYTE bPeriodic : 1;				//6
		BYTE bPrgStack : 1;				//7
		BYTE bInTown : 1;					//8
		BYTE bKick : 1;					//9
		BYTE bInGame : 1;					//10
		BYTE bRepeat : 1;					//11
		BYTE bStSuccessOnly : 1;			//12
		BYTE bStSoundDelay : 1;			//13
		BYTE bWeaponSnd : 1;				//14
		BYTE bImmediate : 1;				//15
		BYTE bNoAmmo : 1;					//16
		BYTE bEnhanceable : 1;			//17
		BYTE bDurability : 1;				//18
		BYTE bUseAttackRating : 1;		//19
		BYTE bTargetableOnly : 1;			//20
		BYTE bSearchEnemyXY : 1;			//21
		BYTE bSearchEnemyNear : 1;		//22
		BYTE bSearchOpenXY : 1;			//23
		BYTE bTargetCorpse : 1;			//24
		BYTE bTargetPet : 1;				//25
		BYTE bTargetAlly : 1;				//26
		BYTE bTargetItem : 1;				//27
		BYTE bAttackNoMana : 1;			//28
		BYTE bItemTgtDo : 1;				//29
		BYTE bLeftSkill : 1;				//30
		BYTE bInterrupt : 1;				//31
		BYTE bTgtPlaceCheck : 1;			//32
		BYTE bItemCheckStart : 1;			//33
		BYTE bItemCltCheckStart : 1;		//34
		BYTE bGeneral : 1;				//35
		BYTE bScroll : 1;					//36
		BYTE bUseManaOnDo : 1;			//37
		BYTE bWarp : 1;					//38
	} dwFlags;				//0x04 (5 bytes)
	DWORD bClassId;			//0x0C
	BYTE bAnim;				//0x10
	BYTE bMonAnim;			//0x11
	BYTE bSeqTrans;			//0x12
	BYTE bSeqNum;			//0x13
	BYTE bRange;			//0x14
	BYTE bSelectProc;		//0x15
	BYTE bSeqInput;			//0x16
	BYTE _1;				//0x17
	WORD wITypeA1;			//0x18
	WORD wITypeA2;			//0x1A
	WORD wITypeA3;			//0x1C
	WORD wITypeB1;			//0x1E
	WORD wITypeB2;			//0x20
	WORD wITypeB3;			//0x22
	WORD wETypeA1;			//0x24
	WORD wETypeA2;			//0x26
	WORD wETypeB1;			//0x28
	WORD wETypeB2;			//0x2A
	WORD wSrvStartFunc;		//0x2C
	WORD wSrvDoFunc;		//0x2E
	WORD wSrvPrgFunc1;		//0x30
	WORD wSrvPrgFunc2;		//0x32
	WORD wSrvPrgFunc3;		//0x34
	WORD _2;				//0x36
	DWORD dwPrgCalc1;		//0x38
	DWORD dwPrgCalc2;		//0x3C
	DWORD dwPrgCalc3;		//0x40
	WORD bPrgDamage;		//0x44
	WORD wSrvMissile;		//0x46
	WORD wSrvMissileA;		//0x48
	WORD wSrvMissileB;		//0x4A
	WORD wSrvMissileC;		//0x4C
	WORD wSrvOverlay;		//0x4E
	DWORD dwAuraFilter;		//0x50
	WORD wAuraStat1;		//0x54
	WORD wAuraStat2;		//0x56
	WORD wAuraStat3;		//0x58
	WORD wAuraStat4;		//0x5A
	WORD wAuraStat5;		//0x5C
	WORD wAuraStat6;		//0x5E
	DWORD dwAuraLenCalc;	//0x60
	DWORD dwAuraRangeCalc;	//0x64
	DWORD dwAuraStatCalc1;	//0x68
	DWORD dwAuraStatCalc2;	//0x6C
	DWORD dwAuraStatCalc3;	//0x70
	DWORD dwAuraStatCalc4;	//0x74
	DWORD dwAuraStatCalc5;	//0x78
	DWORD dwAuraStatCalc6;	//0x7C
	WORD wAuraState;		//0x80
	WORD wAuraTargetState;	//0x82
	WORD wAuraEvent1;		//0x84
	WORD wAuraEvent2;		//0x86
	WORD wAuraEvent3;		//0x88
	WORD wAuraEventFunc1;	//0x8A
	WORD wAuraEventFunc2;	//0x8C
	WORD wAuraEventFunc3;	//0x8E
	WORD wAuraTgtEvent;		//0x90
	WORD wAuraTgtEventFunc;	//0x92
	WORD wPassiveState;		//0x94
	WORD wPassiveiType;		//0x96
	WORD wPassiveStat1;		//0x98
	WORD wPassiveStat2;		//0x9A
	WORD wPassiveStat3;		//0x9C
	WORD wPassiveStat4;		//0x9E
	WORD wPassiveStat5;		//0xA0
	WORD _3;				//0xA2
	DWORD dwPassiveCalc1;	//0xA4
	DWORD dwPassiveCalc2;	//0xA8
	DWORD dwPassiveCalc3;	//0xAC
	DWORD dwPassiveCalc4;	//0xB0
	DWORD dwPassiveCalc5;	//0xB4
	WORD wPassiveEvent;		//0xB8
	WORD wPassiveEventFunc; //0xBA
	WORD wSummon;			//0xBC
	BYTE wPetType;			//0xBE
	BYTE bSumMode;			//0xBF
	DWORD dwPetMax;			//0xC0
	WORD wSumSkill1;		//0xC4
	WORD wSumSkill2;		//0xC6
	WORD wSumSkill3;		//0xC8
	WORD wSumSkill4;		//0xCA
	WORD wSumSkill5;		//0xCC
	WORD _4;				//0xCE
	DWORD dwSumSkCalc1;		//0xD0
	DWORD dwSumSkCalc2;		//0xD4
	DWORD dwSumSkCalc3;		//0xD8
	DWORD dwSumSkCalc4;		//0xDC
	DWORD dwSumSkCalc5;		//0xE0
	WORD wSumUMod;			//0xE4
	WORD wSumOverlay;		//0xE6
	WORD wCltMissile;		//0xE8
	WORD wCltMissileA;		//0xEA
	WORD wCltMissileB;		//0xEC
	WORD wCltMissileC;		//0xEE
	WORD wCltMissileD;		//0xF0
	WORD wCltStFunc;		//0xF2
	WORD wCltDoFunc;		//0xF4
	WORD wCltPrgFunc1;		//0xF6
	WORD wCltPrgFunc2;		//0xF8
	WORD wCltPrgFunc3;		//0xFA
	WORD wStSound;			//0xFC
	WORD _5;				//0xFE
	WORD wDoSound;			//0x100
	WORD wDoSoundA;			//0x102
	WORD wDoSoundB;			//0x104
	WORD wCastOverlay;		//0x106
	WORD wTgtOverlay;		//0x108
	WORD wTgtSound;			//0x10A
	WORD wPrgOverlay;		//0x10C
	WORD wPrgSound;			//0x10E
	WORD wCltOverlayA;		//0x110
	WORD wCltOverlayB;		//0x112
	DWORD dwCltCalc1;		//0x114
	DWORD dwCltCalc2;		//0x118
	DWORD dwCltCalc3;		//0x11C
	WORD bItemTarget;		//0x120
	WORD wItemCastSound;	//0x122
	DWORD wItemCastOverlay;	//0x124
	DWORD dwPerDelay;		//0x128
	WORD wMaxLvl;			//0x12C
	WORD wResultFlags;		//0x12E
	DWORD dwHitFlags;		//0x130
	DWORD dwHitClass;		//0x134
	DWORD dwCalc1;			//0x138
	DWORD dwCalc2;			//0x13C
	DWORD dwCalc3;			//0x140
	DWORD dwCalc4;			//0x144
	DWORD dwParam1;			//0x148
	DWORD dwParam2;			//0x14C
	DWORD dwParam3;			//0x150
	DWORD dwParam4;			//0x154
	DWORD dwParam5;			//0x158
	DWORD dwParam6;			//0x15C
	DWORD dwParam7;			//0x160
	DWORD dwParam8;			//0x164
	WORD bWeapSel;			//0x168
	WORD wItemEffect;		//0x16A
	DWORD wItemCltEffect;	//0x16C
	DWORD dwSkPoints;		//0x170
	WORD wReqLevel;			//0x174
	WORD wReqStr;			//0x176
	WORD wReqDex;			//0x178
	WORD wReqInt;			//0x17A
	WORD wReqVit;			//0x17C
	WORD wReqSkill1;		//0x17E
	WORD wReqSkill2;		//0x180
	WORD wReqSkill3;		//0x182
	WORD wStartMana;		//0x184
	WORD wMinMana;			//0x186
	WORD wManaShift;		//0x188
	WORD wMana;				//0x18A
	WORD wLevelMana;		//0x18C
	BYTE bAttackRank;		//0x18E
	BYTE bLineOfSight;		//0x18F
	DWORD dwDelay;			//0x190
	DWORD wSkillDesc;		//0x194
	DWORD dwToHit;			//0x198
	DWORD dwLevToHit;		//0x19C
	DWORD dwToHitCalc;		//0x1A0
	BYTE bToHitShift;		//0x1A4
	BYTE bSrcDam;			//0x1A5
	WORD _6;				//0x1A6
	DWORD dwMinDam;			//0x1A8
	DWORD dwMaxDam;			//0x1AC
	DWORD dwMinLvlDam1;		//0x1B0
	DWORD dwMinLvlDam2;		//0x1B4
	DWORD dwMinLvlDam3;		//0x1B8
	DWORD dwMinLvlDam4;		//0x1BC
	DWORD dwMinLvlDam5;		//0x1C0
	DWORD dwMaxLvlDam1;		//0x1C4
	DWORD dwMaxLvlDam2;		//0x1C8
	DWORD dwMaxLvlDam3;		//0x1CC
	DWORD dwMaxLvlDam4;		//0x1D0
	DWORD dwMaxLvlDam5;		//0x1D4
	DWORD dwDmgSymPerCalc;	//0x1D8
	WORD bEType;			//0x1DC
	WORD _7;				//0x1DE
	DWORD dwEMin;			//0x1E0
	DWORD dwEMax;			//0x1E4
	DWORD dwEMinLev1;		//0x1E8
	DWORD dwEMinLev2;		//0x1EC
	DWORD dwEMinLev3;		//0x1F0
	DWORD dwEMinLev4;		//0x1F4
	DWORD dwEMinLev5;		//0x1F8
	DWORD dwEMaxLev1;		//0x1FC
	DWORD dwEMaxLev2;		//0x200
	DWORD dwEMaxLev3;		//0x204
	DWORD dwEMaxLev4;		//0x208
	DWORD dwEMaxLev5;		//0x20C
	DWORD dwEDmgSymPerCalc;	//0x210
	DWORD dwELen;			//0x214
	DWORD dwELevLen1;		//0x218
	DWORD dwELevLen2;		//0x21C
	DWORD dwELevLen3;		//0x220
	DWORD dwELenSymPerCalc;	//0x224
	WORD bRestrict;			//0x228
	WORD wState1;			//0x22A
	WORD wState2;			//0x22C
	WORD wState3;			//0x22E
	WORD bAiType;			//0x230
	WORD wAiBonus;			//0x232
	DWORD dwCostMult;		//0x234
	DWORD dwCostAdd;		//0x238
};

struct sgptDataTable {
	BYTE*	pPlayerClass;			//0x00
	DWORD	dwPlayerClassRecords;	//0x04
	BYTE*	pBodyLocs;				//0x08
	DWORD	dwBodyLocsRecords;		//0x0C
	BYTE*	pStorePage;				//0x10
	DWORD	dwStorePageRecords;		//0x14
	BYTE*	pElemTypes;				//0x18
	DWORD	dwElemTypesRecords;		//0x1C
	BYTE*	pHitClass;				//0x20
	DWORD	dwHitClassRecords;		//0x24
	BYTE*	pMonMode;				//0x28
	DWORD	dwMonModeTxt;			//0x2C
	BYTE*	pPlrMode;				//0x30
	DWORD	dwPlrModeRecords;		//0x34
	BYTE*	pSkillCalc;				//0x38
	DWORD	dwSkillCalcRecords;		//0x3C
	BYTE*	pSkillCalcCache;		//0x40
	DWORD	dwSkillCalcCacheRecs;	//0x44
	DWORD	dwSkillCalcCacheDelta;	//0x48
	BYTE*	pSkillDescCalcCache;	//0x4C
	DWORD	dwSkillDescCalcCacheRecs;//0x50
	DWORD	dwSkillDescCalcCacheDelta;//0x54
	BYTE*	pMissCalc;				//0x58
	DWORD	dwMissCalcRecords;		//0x5C
	BYTE*	pMissCalcCache;			//0x60
	DWORD	dwMissCalcCacheRecs;	//0x64
	DWORD	dwMissCalcCacheDelta;	//0x68
	BYTE*	pSkillCodes;			//0x6C
	DWORD	dwSkillCodesRecs;		//0x70
	BYTE*	pEvents;				//0x74
	DWORD	dwEventsRecs;			//0x78
	BYTE*	pCompCodes;				//0x7C
	DWORD	dwCompCodesRecs;		//0x80
	DWORD	dwCompCodes;			//0x84
	BYTE*	pMonAi;					//0x88
	DWORD	dwMonAiRecs;			//0x8C
	DWORD	dwMonAi;				//0x90
	BYTE*	pItem;					//0x94
	BYTE*	pItemCalcCache;			//0x98
	DWORD	dwItemCalcCacheRecs;	//0x9C
	DWORD	dwItemCalcCache;		//0xA0
	BYTE*	pProperties;			//0xA4
	DWORD	dwPropertiesRecs;		//0xA8
	DWORD	dwProporties;			//0xAC
	BYTE*	pRunes;					//0xB0
	BYTE*	pHireDescs;				//0xB4
	DWORD	dwHireDescsRecs;		//0xB8
	DWORD	pStatesTxt;			//0xBC
	DWORD  pStatesLinker;		//0xC0
	DWORD	dwStatesRecs;			//0xC4
	BYTE*	pStateMaskFirst;		//0xC8
	BYTE*	pStateMaskArr[40];		//0xCC
	BYTE*	pProgressiveStates;		//0x16C
	DWORD	dwProgressiveStatesRecs;//0x170
	BYTE*	pCurseStates;			//0x174
	DWORD	dwCurseStatesRecs;		//0x178
	BYTE*	pTransStates;			//0x17C
	DWORD	dwTransStatesRecs;		//0x180
	BYTE*	pActionStates;			//0x184
	DWORD	dwActionStatesRecs;		//0x188
	BYTE*	pColorStates;			//0x18C
	DWORD	dwColorStatesRecs;		//0x190
	BYTE*	pSoundCodes;			//0x194
	BYTE*	pSoundCodesTxt;			//0x198
	DWORD	dwSoundCodesRecs;		//0x19C
	BYTE*	pHirelings;				//0x1A0
	DWORD	dwHirelingsRecs;		//0x1A4
	DWORD	HireNameStart[256];		//0x1A8
	DWORD	HireNameEnd[256];		//0x5A8
	BYTE*	pNpcs;					//0x9A8
	DWORD	dwNpcsRecs;				//0x9AC
	BYTE*	pColorsTxt;				//0x9B0
	BYTE*	pColors;				//0x9B4
	BYTE*	pTreasureClassEx;		//0x9B8
	BYTE*	pTreasureClassExTxt;	//0x9BC
	DWORD	dwTreasureClassExRecs;	//0x9C0
	BYTE*	pChestTreasureClassLst[45];	//0x9C4
	DWORD	pMonStatsTxt;		//0xA78
	BYTE*	pMonStats;				//0xA7C
	DWORD	dwMonStatsRecs;			//0xA80
	BYTE*	pMonSoundsTxt;			//0xA84
	BYTE*	pMonSounds;				//0xA88
	DWORD	dwMonSoundsRecs;		//0xA8C
	BYTE*	pMonStats2Txt;			//0xA90
	BYTE*	pMonStats2;				//0xA94
	DWORD	dwMonStats2Recs;		//0xA98
	BYTE*	pMonPlaceTxt;			//0xA9C
	BYTE*	pMonPlace;				//0xAA0
	DWORD	dwMonPlaceRecs;			//0xAA4
	BYTE*	pMonPresetTxt;			//0xAA8
	BYTE*	pMonPresetActLst[5];	//0xAAC
	DWORD	dwMonPresetActRecs[5];	//0xAC0
	BYTE*	pSuperUniquesTxt;		//0xAD4
	BYTE*	pSuperUniques;			//0xAD8
	DWORD	dwSuperUniquesRecs;		//0xADC
	WORD	SuperUniqueIdxList[66];	//0xAE0
	DWORD	pMissilesTxt;	//0xB64
	BYTE*	pMissiles;				//0xB68
	DWORD	dwMissilesRecs;			//0xB6C
	BYTE*	pMonLvl;				//0xB70
	DWORD	dwMonLvlRecs;			//0xB74
	BYTE*	pMonSeqTxt;				//0xB78
	BYTE*	pMonSeq;				//0xB7C
	DWORD	dwMonSeqRecs;			//0xB80
	BYTE*	pMonSequences;			//0xB84
	DWORD	dwMonSequencesRecs;		//0xB88
	BYTE*	pSkillDescTxt;			//0xB8C
	BYTE*	pSkillDesc;				//0xB90
	DWORD	dwSkillDescRecs;		//0xB94
	DWORD	pSkillsTxt;			//0xB98
	BYTE*	pSkills;				//0xB9C
	DWORD	dwSkillsRecs;			//0xBA0
	BYTE*	pPlayerSkillCount;		//0xBA4
	DWORD	dwPlayerSkillCount;		//0xBA8
	BYTE*	pPlayerSkillList;		//0xBAC
	DWORD	dwPassiveSkillCount;	//0xBB0
	BYTE*	pPasssiveSkillList;		//0xBB4
	BYTE*	pOverlayTxt;			//0xBB8
	BYTE*	pOverlay;				//0xBBC
	DWORD	dwOverlayRecs;			//0xBC0
	CharStatsTxt*	pCharStatsTxt;	//0xBC4
	DWORD	dwCharsStatsRecs;		//0xBC8
	DWORD	pItemStatCostTxt;//0xBCC
	BYTE*	pItemStatCost;			//0xBD0
	int		dwItemStatCostRecs;		//0xBD4
	BYTE*	pOpStatNesting;			//0xBD8
	DWORD	dwOpStatNestingRecs;	//0xBDC
	BYTE*	pMonEquip;				//0xBE0
	DWORD	dwMonEquipRecs;			//0xBE4
	BYTE*	pPetTypesTxt;			//0xBE8
	BYTE*	pPetTypes;				//0xBEC
	DWORD	dwPetTypesRecs;			//0xBF0
	BYTE*	pItemsType;				//0xBF4
	DWORD	pItemsTypeTxt;  //0xBF8
	DWORD	dwItemsTypeRecs;		//0xBFC
	DWORD	dwItemsTypeNesting;		//0xC00
	BYTE*	pItemsTypeNesting;		//0xC04
	BYTE*	pSets;					//0xC08
	BYTE*	pSetsTxt;				//0xC0C
	DWORD	dwSetsRecs;				//0xC10
	BYTE*	pSetItems;				//0xC14
	DWORD	pSetItemsTxt;	//0xC18
	DWORD	dwSetItemsRecs;			//0xC1C
	BYTE*	pUniqueItems;			//0xC20
	DWORD	pUniqueItemsTxt;//0xC24
	DWORD	dwUniqItemsRecs;		//0xC28
	BYTE*	pMonProp;				//0xC2C
	BYTE*	pMonPropTxt;			//0xC30
	DWORD	dwMonPropRecs;			//0xC34
	BYTE*	pMonType;				//0xC38
	BYTE*	pMonTypeTxt;			//0xC3C
	DWORD	dwMonTypeRecs;			//0xC40
	BYTE*	pMonTypeNesting;		//0xC44
	DWORD	dwMonTypeNestingRecs;	//0xC48
	BYTE*	pMonUMod;				//0xC4C
	BYTE*	pMonUModTxt;			//0xC50
	DWORD	dwMonUModRecs;			//0xC54
	DWORD	pLevelsTxt;			//0xC58
	DWORD	dwLevelsRecs;			//0xC5C
	BYTE*	pLvlDefs;				//0xC60
	BYTE*	pLvlPrest;				//0xC64
	DWORD	dwLvlPrestRecs;			//0xC68
	DWORD	ItemStatCostStuff[2];	//0xC6C
	BYTE*	pAnimTables;			//0xC74
	BYTE*	pExperience;			//0xC78
	DWORD	pDiffLvlsTxt;	//0xC7C
	DWORD	dwDiffLvlsRecs;			//0xC80
	// An unexpected surprise!

	DWORD	_1;						//0xC84
	BYTE*	pCharTemp;				//0xC88
	DWORD	dwCharTempRecs;			//0xC8C
	DWORD	pArena;				//0xC90
	DWORD	pCubeMain;		//0xC94
	DWORD	dwCubeMainRecs;			//0xC98
	DWORD   _2;						//0xC9C
	BYTE*	pLvlSubExtra;			//0xCA0
	BYTE*	pExpFieldD2;			//0xCA4
	DWORD   ExpFieldData[5];		//0xCA8
	BYTE*	pLvlTypes;				//0xCBC
	BYTE*   pWaypoints;				//0xCC0
	DWORD	dwWaypointsRecs;		//0xCC4
	DWORD	dwLvlTypes;				//0xCC8
	DWORD	pLvlWarp;			//0xCCC
	DWORD	dwLvlWarpRecs;			//0xCD0
	BYTE*	pLvlMaze;				//0xCD4
	DWORD	dwLvlMazeRecs;			//0xCD8
	BYTE*	pLvlSub;				//0xCDC
	DWORD	dwLvlSubRecs;			//0xCE0
	DWORD   pLvlSubCache;			//0xCE4 aka sgpnTileSubsTypeStart
	DWORD	_5[5];					//0xCE8
	BYTE*	pMapCache;				//0xCFC
	DWORD	dwMapCacheRecs;			//0xD00
	DWORD	_6[2];					//0xD04

	BOOL	bWriteBinFiles;			//0xD0C
};
// end of file --------------------------------------------------------------
#pragma pack()
#endif