// Copyright Epic Games, Inc. All Rights Reserved.

#include "GetSystemInformationBPLibrary.h"
#include "GetSystemInformation.h"
#include <iostream>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <dxgi.h>
#pragma comment (lib, "dxgi.lib")
#pragma warning(disable : 4996)

float GetRAM()
{
    using namespace std;
    MEMORYSTATUSEX statex;

    statex.dwLength = sizeof(statex); // I misunderstand that

    GlobalMemoryStatusEx(&statex);

    return ((float)statex.ullTotalPhys / (1024 * 1024 * 1024));


}
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

int UGetSystemInformationBPLibrary::GetCPUEndProcessorType()
{
    return GetInfoCPU().dwProcessorType;
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


