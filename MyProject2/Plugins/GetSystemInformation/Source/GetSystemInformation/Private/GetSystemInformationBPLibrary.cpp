// Copyright Epic Games, Inc. All Rights Reserved.

#include "GetSystemInformationBPLibrary.h"
#include "GetSystemInformation.h"
#include <iostream>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#pragma warning(disable : 4996)

float GetRAM()
{
    using namespace std;
    MEMORYSTATUSEX statex;

    statex.dwLength = sizeof(statex); // I misunderstand that

    GlobalMemoryStatusEx(&statex);

    return ((float)statex.ullTotalPhys / (1024 * 1024 * 1024));


}
struct Version 
{
    const unsigned majorVersion;
    const unsigned minorVersion;
};
Version GetOsVersion() {
    const DWORD encodedVersion = ::GetVersion();
    const unsigned majorVersion = unsigned(LOBYTE(LOWORD(encodedVersion)));
    const unsigned minorVersion = unsigned(HIBYTE(LOWORD(encodedVersion)));

    std::printf("  Running under Windows %u.%u\n", majorVersion, minorVersion);
    return { majorVersion, minorVersion };
}

UGetSystemInformationBPLibrary::UGetSystemInformationBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UGetSystemInformationBPLibrary::GetRAMEnd()
{
	return GetRAM();
}

