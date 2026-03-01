/****************************************************************************
*                                                                           *
*   DLLmain.h                                                               *
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
*   D2Template core file, do not modify unless you know what you're doing   *
*                                                                           *
*****************************************************************************/
#pragma once

#ifndef _DLLMAIN_H
#define _DLLMAIN_H

#define WIN32_LEAN_AND_MEAN
#define _CRT_SECURE_NO_DEPRECATE
#define _WIN32_WINNT 0x600

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include "INIReader.h"

//Common
#include "D2Constants.h"	//常量定义
#include "D2Structs.h"		//数据结构
#include "D2Ptrs.h"			//游戏内函数和变量指针
#include "D2Vars.h"			//全局变量定义
#include "D2Stubs.h"		//辅助函数定义
#include "TemplateIncludes.h"

void __fastcall D2TEMPLATE_FatalError(const char* szMessage);

#endif
