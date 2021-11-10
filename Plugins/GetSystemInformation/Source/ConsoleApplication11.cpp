// ConsoleApplication11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//For /Wall
#pragma warning(push)
#pragma warning(disable : 4820)
#pragma warning(disable : 4619)
#pragma warning(disable : 4548)
#pragma warning(disable : 4668)
#pragma warning(disable : 4365)
#pragma warning(disable : 4710)
#pragma warning(disable : 4371)
#pragma warning(disable : 4826)
#pragma warning(disable : 4061)
#pragma warning(disable : 4640)

#include <iostream>
#include <dxgi.h>
#pragma comment (lib, "dxgi.lib")
using namespace std;
class AAA {};
int GetNumberVideocard() 
{
    IDXGIFactory1* pFactory;
    HRESULT hr = CreateDXGIFactory1(__uuidof(IDXGIFactory1), (void**)(&pFactory));
    int AdapterNumber = 0;
    IDXGIAdapter1* Adapter;
    cout << "Adapters:" << endl;
    while (pFactory->EnumAdapters1(AdapterNumber++, &Adapter) != DXGI_ERROR_NOT_FOUND)
    {
    }
    return AdapterNumber;
}




int GetVieocardName(int)
{
        IDXGIFactory1* pFactory;
        HRESULT hr = CreateDXGIFactory1(__uuidof(IDXGIFactory1), (void**)(&pFactory));
        int AdapterNumber = 0;
        IDXGIAdapter1* Adapter;
        cout << "Adapters:" << endl;
        while (pFactory->EnumAdapters1(AdapterNumber++, &Adapter) != DXGI_ERROR_NOT_FOUND)
        {
        }
        return 0;
    }


int main()
{
    IDXGIFactory1* pFactory;
    HRESULT hr = CreateDXGIFactory1(__uuidof(IDXGIFactory1), (void**)(&pFactory));
    int AdapterNumber = 0;
    IDXGIAdapter1* Adapter;
    cout << "Adapters:" << endl;
    while (pFactory->EnumAdapters1(AdapterNumber++, &Adapter) != DXGI_ERROR_NOT_FOUND) {
        DXGI_ADAPTER_DESC1 Desc;
        Adapter->GetDesc1(&Desc);
        wprintf(L"%s\n", Desc.Description);
        Adapter->Release();
    }
    pFactory->Release();
    system("pause");
    return 0;
}