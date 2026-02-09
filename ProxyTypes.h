/*
 * Part of this code is derived from the CivilizationVI_CommunityExtension project.
 * The original framework has been simplified and modified to implement
 * specifically the Canal Hill placement patch.
 *
 * Original project source: https://github.com/Wild-W/CivilizationVI_CommunityExtension
 * Licensed under AGPL-3.0.
 */
#pragma once
#include <windows.h>

namespace ProxyTypes {
    // 游戏初始化上下文的函数原型
    typedef void* (__cdecl* DllCreateGameContext)(void);
}