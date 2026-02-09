/*
 * Part of this code is derived from the CivilizationVI_CommunityExtension project.
 * The original framework has been simplified and modified to implement
 * specifically the Canal Hill placement patch.
 *
 * Original project source: https://github.com/Wild-W/CivilizationVI_CommunityExtension
 * Licensed under AGPL-3.0.
 */
// Runtime.cpp
#include "Runtime.h"
#include <iostream>

namespace Runtime {
    HMODULE GameCore = NULL;
    uintptr_t GameCoreAddress = 0;

    void Create() {
        GameCore = LoadLibrary(TEXT("../../../DLC/Expansion2/Binaries/Win64/GameCore_XP2_FinalRelease.dll"));
        if (GameCore) {
            GameCoreAddress = reinterpret_cast<uintptr_t>(GameCore);
        }
    }
}