// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GetSystemInformation/Public/GetSystemInformationBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetSystemInformationBPLibrary() {}
// Cross Module References
	GETSYSTEMINFORMATION_API UClass* Z_Construct_UClass_UGetSystemInformationBPLibrary_NoRegister();
	GETSYSTEMINFORMATION_API UClass* Z_Construct_UClass_UGetSystemInformationBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GetSystemInformation();
// End Cross Module References
	DEFINE_FUNCTION(UGetSystemInformationBPLibrary::execGetCPUEndWindowsVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UGetSystemInformationBPLibrary::GetCPUEndWindowsVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetSystemInformationBPLibrary::execGetCPUEndActiveProcessorMask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGetSystemInformationBPLibrary::GetCPUEndActiveProcessorMask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetSystemInformationBPLibrary::execGetCPUEndMaximumApplicationAddres)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGetSystemInformationBPLibrary::GetCPUEndMaximumApplicationAddres();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetSystemInformationBPLibrary::execGetCPUEndMinimumApplicationAddres)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGetSystemInformationBPLibrary::GetCPUEndMinimumApplicationAddres();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetSystemInformationBPLibrary::execGetCPUEndProcessorType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGetSystemInformationBPLibrary::GetCPUEndProcessorType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetSystemInformationBPLibrary::execGetCPUEndNumberOfProcessor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGetSystemInformationBPLibrary::GetCPUEndNumberOfProcessor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetSystemInformationBPLibrary::execGetCPUEndOEMID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UGetSystemInformationBPLibrary::GetCPUEndOEMID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetSystemInformationBPLibrary::execGetRAMEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UGetSystemInformationBPLibrary::GetRAMEnd();
		P_NATIVE_END;
	}
	void UGetSystemInformationBPLibrary::StaticRegisterNativesUGetSystemInformationBPLibrary()
	{
		UClass* Class = UGetSystemInformationBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCPUEndActiveProcessorMask", &UGetSystemInformationBPLibrary::execGetCPUEndActiveProcessorMask },
			{ "GetCPUEndMaximumApplicationAddres", &UGetSystemInformationBPLibrary::execGetCPUEndMaximumApplicationAddres },
			{ "GetCPUEndMinimumApplicationAddres", &UGetSystemInformationBPLibrary::execGetCPUEndMinimumApplicationAddres },
			{ "GetCPUEndNumberOfProcessor", &UGetSystemInformationBPLibrary::execGetCPUEndNumberOfProcessor },
			{ "GetCPUEndOEMID", &UGetSystemInformationBPLibrary::execGetCPUEndOEMID },
			{ "GetCPUEndProcessorType", &UGetSystemInformationBPLibrary::execGetCPUEndProcessorType },
			{ "GetCPUEndWindowsVersion", &UGetSystemInformationBPLibrary::execGetCPUEndWindowsVersion },
			{ "GetRAMEnd", &UGetSystemInformationBPLibrary::execGetRAMEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndActiveProcessorMask_Statics
	{
		struct GetSystemInformationBPLibrary_eventGetCPUEndActiveProcessorMask_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndActiveProcessorMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetSystemInformationBPLibrary_eventGetCPUEndActiveProcessorMask_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndActiveProcessorMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndActiveProcessorMask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndActiveProcessorMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetSystemInformationTesting" },
		{ "DisplayName", "GET CPU Active Processor Mask" },
		{ "Keywords", "GET CPU Active Processor Mask" },
		{ "ModuleRelativePath", "Public/GetSystemInformationBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndActiveProcessorMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetSystemInformationBPLibrary, nullptr, "GetCPUEndActiveProcessorMask", nullptr, nullptr, sizeof(GetSystemInformationBPLibrary_eventGetCPUEndActiveProcessorMask_Parms), Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndActiveProcessorMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndActiveProcessorMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndActiveProcessorMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndActiveProcessorMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndActiveProcessorMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndActiveProcessorMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMaximumApplicationAddres_Statics
	{
		struct GetSystemInformationBPLibrary_eventGetCPUEndMaximumApplicationAddres_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMaximumApplicationAddres_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetSystemInformationBPLibrary_eventGetCPUEndMaximumApplicationAddres_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMaximumApplicationAddres_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMaximumApplicationAddres_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMaximumApplicationAddres_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetSystemInformationTesting" },
		{ "DisplayName", "GET CPU Maximum Application Address" },
		{ "Keywords", "GET CPU Maximum Application Address" },
		{ "ModuleRelativePath", "Public/GetSystemInformationBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMaximumApplicationAddres_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetSystemInformationBPLibrary, nullptr, "GetCPUEndMaximumApplicationAddres", nullptr, nullptr, sizeof(GetSystemInformationBPLibrary_eventGetCPUEndMaximumApplicationAddres_Parms), Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMaximumApplicationAddres_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMaximumApplicationAddres_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMaximumApplicationAddres_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMaximumApplicationAddres_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMaximumApplicationAddres()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMaximumApplicationAddres_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMinimumApplicationAddres_Statics
	{
		struct GetSystemInformationBPLibrary_eventGetCPUEndMinimumApplicationAddres_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMinimumApplicationAddres_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetSystemInformationBPLibrary_eventGetCPUEndMinimumApplicationAddres_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMinimumApplicationAddres_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMinimumApplicationAddres_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMinimumApplicationAddres_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetSystemInformationTesting" },
		{ "DisplayName", "GET CPU Minimum Application Address" },
		{ "Keywords", "GET CPU Minimum Application Address" },
		{ "ModuleRelativePath", "Public/GetSystemInformationBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMinimumApplicationAddres_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetSystemInformationBPLibrary, nullptr, "GetCPUEndMinimumApplicationAddres", nullptr, nullptr, sizeof(GetSystemInformationBPLibrary_eventGetCPUEndMinimumApplicationAddres_Parms), Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMinimumApplicationAddres_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMinimumApplicationAddres_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMinimumApplicationAddres_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMinimumApplicationAddres_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMinimumApplicationAddres()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMinimumApplicationAddres_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndNumberOfProcessor_Statics
	{
		struct GetSystemInformationBPLibrary_eventGetCPUEndNumberOfProcessor_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndNumberOfProcessor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetSystemInformationBPLibrary_eventGetCPUEndNumberOfProcessor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndNumberOfProcessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndNumberOfProcessor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndNumberOfProcessor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetSystemInformationTesting" },
		{ "DisplayName", "GET CPU Number Of Processor" },
		{ "Keywords", "Get CPU Number Of Processor" },
		{ "ModuleRelativePath", "Public/GetSystemInformationBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndNumberOfProcessor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetSystemInformationBPLibrary, nullptr, "GetCPUEndNumberOfProcessor", nullptr, nullptr, sizeof(GetSystemInformationBPLibrary_eventGetCPUEndNumberOfProcessor_Parms), Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndNumberOfProcessor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndNumberOfProcessor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndNumberOfProcessor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndNumberOfProcessor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndNumberOfProcessor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndNumberOfProcessor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndOEMID_Statics
	{
		struct GetSystemInformationBPLibrary_eventGetCPUEndOEMID_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndOEMID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetSystemInformationBPLibrary_eventGetCPUEndOEMID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndOEMID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndOEMID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndOEMID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetSystemInformationTesting" },
		{ "DisplayName", "GET CPU OEMID" },
		{ "Keywords", "Get CPU OEMID" },
		{ "ModuleRelativePath", "Public/GetSystemInformationBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndOEMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetSystemInformationBPLibrary, nullptr, "GetCPUEndOEMID", nullptr, nullptr, sizeof(GetSystemInformationBPLibrary_eventGetCPUEndOEMID_Parms), Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndOEMID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndOEMID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndOEMID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndOEMID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndOEMID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndOEMID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndProcessorType_Statics
	{
		struct GetSystemInformationBPLibrary_eventGetCPUEndProcessorType_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndProcessorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetSystemInformationBPLibrary_eventGetCPUEndProcessorType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndProcessorType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndProcessorType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndProcessorType_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetSystemInformationTesting" },
		{ "DisplayName", "GET CPU Processor type" },
		{ "Keywords", "GET CPU Processor type" },
		{ "ModuleRelativePath", "Public/GetSystemInformationBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndProcessorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetSystemInformationBPLibrary, nullptr, "GetCPUEndProcessorType", nullptr, nullptr, sizeof(GetSystemInformationBPLibrary_eventGetCPUEndProcessorType_Parms), Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndProcessorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndProcessorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndProcessorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndProcessorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndProcessorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndProcessorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndWindowsVersion_Statics
	{
		struct GetSystemInformationBPLibrary_eventGetCPUEndWindowsVersion_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndWindowsVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetSystemInformationBPLibrary_eventGetCPUEndWindowsVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndWindowsVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndWindowsVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndWindowsVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetSystemInformationTesting" },
		{ "DisplayName", "GET Windows Version" },
		{ "Keywords", "GET Windows Version" },
		{ "ModuleRelativePath", "Public/GetSystemInformationBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndWindowsVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetSystemInformationBPLibrary, nullptr, "GetCPUEndWindowsVersion", nullptr, nullptr, sizeof(GetSystemInformationBPLibrary_eventGetCPUEndWindowsVersion_Parms), Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndWindowsVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndWindowsVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndWindowsVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndWindowsVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndWindowsVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndWindowsVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetRAMEnd_Statics
	{
		struct GetSystemInformationBPLibrary_eventGetRAMEnd_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetRAMEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetSystemInformationBPLibrary_eventGetRAMEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetRAMEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetRAMEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetRAMEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetSystemInformationTesting" },
		{ "DisplayName", "GET RAM" },
		{ "Keywords", "Get RAM" },
		{ "ModuleRelativePath", "Public/GetSystemInformationBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetRAMEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetSystemInformationBPLibrary, nullptr, "GetRAMEnd", nullptr, nullptr, sizeof(GetSystemInformationBPLibrary_eventGetRAMEnd_Parms), Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetRAMEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetRAMEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetRAMEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetRAMEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetRAMEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetRAMEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetSystemInformationBPLibrary_NoRegister()
	{
		return UGetSystemInformationBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGetSystemInformationBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetSystemInformationBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GetSystemInformation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetSystemInformationBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndActiveProcessorMask, "GetCPUEndActiveProcessorMask" }, // 1700312322
		{ &Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMaximumApplicationAddres, "GetCPUEndMaximumApplicationAddres" }, // 1954906067
		{ &Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndMinimumApplicationAddres, "GetCPUEndMinimumApplicationAddres" }, // 183519409
		{ &Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndNumberOfProcessor, "GetCPUEndNumberOfProcessor" }, // 1181217521
		{ &Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndOEMID, "GetCPUEndOEMID" }, // 4160433376
		{ &Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndProcessorType, "GetCPUEndProcessorType" }, // 3669462653
		{ &Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetCPUEndWindowsVersion, "GetCPUEndWindowsVersion" }, // 1068322158
		{ &Z_Construct_UFunction_UGetSystemInformationBPLibrary_GetRAMEnd, "GetRAMEnd" }, // 3438425216
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetSystemInformationBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "GetSystemInformationBPLibrary.h" },
		{ "ModuleRelativePath", "Public/GetSystemInformationBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetSystemInformationBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetSystemInformationBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetSystemInformationBPLibrary_Statics::ClassParams = {
		&UGetSystemInformationBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetSystemInformationBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetSystemInformationBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetSystemInformationBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetSystemInformationBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetSystemInformationBPLibrary, 1250941446);
	template<> GETSYSTEMINFORMATION_API UClass* StaticClass<UGetSystemInformationBPLibrary>()
	{
		return UGetSystemInformationBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetSystemInformationBPLibrary(Z_Construct_UClass_UGetSystemInformationBPLibrary, &UGetSystemInformationBPLibrary::StaticClass, TEXT("/Script/GetSystemInformation"), TEXT("UGetSystemInformationBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetSystemInformationBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
