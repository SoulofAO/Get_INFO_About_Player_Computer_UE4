// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GETSYSTEMINFORMATION_GetSystemInformationBPLibrary_generated_h
#error "GetSystemInformationBPLibrary.generated.h already included, missing '#pragma once' in GetSystemInformationBPLibrary.h"
#endif
#define GETSYSTEMINFORMATION_GetSystemInformationBPLibrary_generated_h

#define MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_SPARSE_DATA
#define MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVideocardName); \
	DECLARE_FUNCTION(execGetNumberVideocard); \
	DECLARE_FUNCTION(execGetDISKSpace); \
	DECLARE_FUNCTION(execGetCPUEndWindowsVersion); \
	DECLARE_FUNCTION(execGetCPUEndActiveProcessorMask); \
	DECLARE_FUNCTION(execGetCPUEndMaximumApplicationAddres); \
	DECLARE_FUNCTION(execGetCPUEndMinimumApplicationAddres); \
	DECLARE_FUNCTION(execGetCPUEndProcessorType); \
	DECLARE_FUNCTION(execGetCPUEndNumberOfProcessor); \
	DECLARE_FUNCTION(execGetCPUEndOEMID); \
	DECLARE_FUNCTION(execGetRAMEnd);


#define MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVideocardName); \
	DECLARE_FUNCTION(execGetNumberVideocard); \
	DECLARE_FUNCTION(execGetDISKSpace); \
	DECLARE_FUNCTION(execGetCPUEndWindowsVersion); \
	DECLARE_FUNCTION(execGetCPUEndActiveProcessorMask); \
	DECLARE_FUNCTION(execGetCPUEndMaximumApplicationAddres); \
	DECLARE_FUNCTION(execGetCPUEndMinimumApplicationAddres); \
	DECLARE_FUNCTION(execGetCPUEndProcessorType); \
	DECLARE_FUNCTION(execGetCPUEndNumberOfProcessor); \
	DECLARE_FUNCTION(execGetCPUEndOEMID); \
	DECLARE_FUNCTION(execGetRAMEnd);


#define MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetSystemInformationBPLibrary(); \
	friend struct Z_Construct_UClass_UGetSystemInformationBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UGetSystemInformationBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GetSystemInformation"), NO_API) \
	DECLARE_SERIALIZER(UGetSystemInformationBPLibrary)


#define MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUGetSystemInformationBPLibrary(); \
	friend struct Z_Construct_UClass_UGetSystemInformationBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UGetSystemInformationBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GetSystemInformation"), NO_API) \
	DECLARE_SERIALIZER(UGetSystemInformationBPLibrary)


#define MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetSystemInformationBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetSystemInformationBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetSystemInformationBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetSystemInformationBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetSystemInformationBPLibrary(UGetSystemInformationBPLibrary&&); \
	NO_API UGetSystemInformationBPLibrary(const UGetSystemInformationBPLibrary&); \
public:


#define MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetSystemInformationBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetSystemInformationBPLibrary(UGetSystemInformationBPLibrary&&); \
	NO_API UGetSystemInformationBPLibrary(const UGetSystemInformationBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetSystemInformationBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetSystemInformationBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetSystemInformationBPLibrary)


#define MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_25_PROLOG
#define MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_SPARSE_DATA \
	MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_RPC_WRAPPERS \
	MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_INCLASS \
	MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_SPARSE_DATA \
	MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GetSystemInformationBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GETSYSTEMINFORMATION_API UClass* StaticClass<class UGetSystemInformationBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject4_Plugins_GetSystemInformation_Source_GetSystemInformation_Public_GetSystemInformationBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
