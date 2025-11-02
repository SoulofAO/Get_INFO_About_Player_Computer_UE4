// Copyright Epic Games, Inc. All Rights Reserved.

#include "GetSystemInformationBPLibrary.h"
#include "GetSystemInformation.h"
#include <iostream>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <dxgi.h>
#include <sstream>
#include <intrin.h>
#pragma comment (lib, "dxgi.lib")
#pragma warning(disable : 4996)





//VideocardName
int UGetSystemInformationBPLibrary::GetNumberVideocard() {
    IDXGIFactory1* pFactory;
    HRESULT hr = CreateDXGIFactory1(__uuidof(IDXGIFactory1), (void**)(&pFactory));
    int AdapterNumber = 0;
    IDXGIAdapter1* Adapter;
    while (pFactory->EnumAdapters1(AdapterNumber, &Adapter) != DXGI_ERROR_NOT_FOUND) {
        AdapterNumber++;
    }
    return AdapterNumber;
}

FString UGetSystemInformationBPLibrary::GetVideocardName(int number)
{
    IDXGIFactory1* pFactory;
    HRESULT hr = CreateDXGIFactory1(__uuidof(IDXGIFactory1), (void**)(&pFactory));
    IDXGIAdapter1* Adapter;
    FString String;
    if (pFactory->EnumAdapters1(number, &Adapter) != DXGI_ERROR_NOT_FOUND) {
        DXGI_ADAPTER_DESC1 Desc;
        Adapter->GetDesc1(&Desc);
        String = Desc.Description;
    }
    return String;
}



//////////
// 
// 
// //////

//ProcessorName
struct cpuid_regs
{
    DWORD   Eax;
    DWORD   Ebx;
    DWORD   Ecx;
    DWORD   Edx;
};

std::string SplitIntoChars(DWORD Value)
{
    std::string Str;
    char const* pCursor = (char const*)&Value;
    for (int i = 0; i < sizeof(Value); ++i) {
        Str += pCursor[i];
    }
    return Str;
}

std::string GetCpuVendorSubstring(DWORD Eax)
{
    cpuid_regs Regs;
    __cpuid((int*)&Regs, Eax);
    std::string Str;
    Str += SplitIntoChars(Regs.Eax);
    Str += SplitIntoChars(Regs.Ebx);
    Str += SplitIntoChars(Regs.Ecx);
    Str += SplitIntoChars(Regs.Edx);
    return Str;
}

std::string GetCpuVendorString()
{
    std::string VendorString;
    cpuid_regs Regs;
    __cpuid((int*)&Regs, 0x80000000);
    if (Regs.Eax >= 0x80000004)
    {
        VendorString =
            GetCpuVendorSubstring(0x80000002) +
            GetCpuVendorSubstring(0x80000003) +
            GetCpuVendorSubstring(0x80000004)
            ;
    }
    return VendorString;
}


FString UGetSystemInformationBPLibrary::GetCPUName()
{
    
    return FString(GetCpuVendorString().c_str());
}


///////////

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
SYSTEM_INFO GetInfoCPU(){
SYSTEM_INFO siSysInfo;

GetSystemInfo(&siSysInfo);
return siSysInfo;

}

UGetSystemInformationBPLibrary::UGetSystemInformationBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}
float GetRAM()
{
    using namespace std;
    MEMORYSTATUSEX statex;

    statex.dwLength = sizeof(statex); // I misunderstand that

    GlobalMemoryStatusEx(&statex);

    return ((float)statex.ullTotalPhys / (1024 * 1024 * 1024));


}
float UGetSystemInformationBPLibrary::GetRAMEnd()
{
	return GetRAM();
}

float UGetSystemInformationBPLibrary::GetCPUEndOEMID()
{
    
    return GetInfoCPU().dwOemId;
}

int UGetSystemInformationBPLibrary::GetCPUEndNumberOfProcessor()
{
    return GetInfoCPU().dwNumberOfProcessors;
}

FString UGetSystemInformationBPLibrary::GetCPUEndProcessorType()

{
    std::stringstream string;
    string<< GetInfoCPU().dwProcessorType;
    std::string STDstring = string.str();
    FString Need_String(STDstring.c_str());
    return Need_String;
}

int UGetSystemInformationBPLibrary::GetCPUEndMinimumApplicationAddres()
{   
    //Cast<int>(GetInfoCPU().lpMinimumApplicationAddress);
    return 0; 
}

int UGetSystemInformationBPLibrary::GetCPUEndMaximumApplicationAddres()
{
    //Cast<int>(GetInfoCPU().lpMinimumApplicationAddress);
    return 0;
        
}

int UGetSystemInformationBPLibrary::GetCPUEndActiveProcessorMask()
{
    return GetInfoCPU().dwActiveProcessorMask;
}

float UGetSystemInformationBPLibrary::GetCPUEndWindowsVersion()
{
    const DWORD encodedVersion = ::GetVersion();
    unsigned majorVersion = unsigned(LOBYTE(LOWORD(encodedVersion)));
    unsigned minorVersion = unsigned(HIBYTE(LOWORD(encodedVersion)));
    float F = majorVersion + minorVersion/10;
    return F;
}

float UGetSystemInformationBPLibrary::GetDISKSpace()
{
    ULARGE_INTEGER free;
    GetDiskFreeSpaceEx(NULL, &free, NULL, NULL);
    return free.QuadPart / 1024 / 1024 / 1024;
}


