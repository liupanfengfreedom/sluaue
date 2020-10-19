// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLUA_PRIMARY_Slua_GameInstance_generated_h
#error "Slua_GameInstance.generated.h already included, missing '#pragma once' in Slua_GameInstance.h"
#endif
#define SLUA_PRIMARY_Slua_GameInstance_generated_h

#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_44_DELEGATE \
struct Slua_GameInstance_eventOnTimeupdelegate_Parms \
{ \
	FString str; \
}; \
static inline void FOnTimeupdelegate_DelegateWrapper(const FScriptDelegate& OnTimeupdelegate, const FString& str) \
{ \
	Slua_GameInstance_eventOnTimeupdelegate_Parms Parms; \
	Parms.str=str; \
	OnTimeupdelegate.ProcessDelegate<UObject>(&Parms); \
}


#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_38_DELEGATE \
struct Slua_GameInstance_eventOnRequestCompleted_Parms \
{ \
	FString str; \
	TArray<uint8> dataarray; \
}; \
static inline void FOnRequestCompleted_DelegateWrapper(const FScriptDelegate& OnRequestCompleted, const FString& str, TArray<uint8> const& dataarray) \
{ \
	Slua_GameInstance_eventOnRequestCompleted_Parms Parms; \
	Parms.str=str; \
	Parms.dataarray=dataarray; \
	OnRequestCompleted.ProcessDelegate<UObject>(&Parms); \
}


#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_37_DELEGATE \
static inline void FOnAssetfoundvent_DelegateWrapper(const FScriptDelegate& OnAssetfoundvent) \
{ \
	OnAssetfoundvent.ProcessDelegate<UObject>(NULL); \
}


#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_36_DELEGATE \
static inline void FOnAssetdownloadCompeletvent_DelegateWrapper(const FScriptDelegate& OnAssetdownloadCompeletvent) \
{ \
	OnAssetdownloadCompeletvent.ProcessDelegate<UObject>(NULL); \
}


#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_35_DELEGATE \
struct Slua_GameInstance_eventOnAssetdownloadingevent_Parms \
{ \
	float a; \
}; \
static inline void FOnAssetdownloadingevent_DelegateWrapper(const FScriptDelegate& OnAssetdownloadingevent, float a) \
{ \
	Slua_GameInstance_eventOnAssetdownloadingevent_Parms Parms; \
	Parms.a=a; \
	OnAssetdownloadingevent.ProcessDelegate<UObject>(&Parms); \
}


#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_34_DELEGATE \
static inline void FOnAssetdownloadFailed_DelegateWrapper(const FScriptDelegate& OnAssetdownloadFailed) \
{ \
	OnAssetdownloadFailed.ProcessDelegate<UObject>(NULL); \
}


#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_33_DELEGATE \
static inline void FOnAssetdownloadFailedm_DelegateWrapper(const FScriptDelegate& OnAssetdownloadFailedm) \
{ \
	OnAssetdownloadFailedm.ProcessDelegate<UObject>(NULL); \
}


#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_SPARSE_DATA
#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execopenlevel); \
	DECLARE_FUNCTION(execlogtoscreen); \
	DECLARE_FUNCTION(execdosthdelay); \
	DECLARE_FUNCTION(execdownloadassetfromcloudorlocal); \
	DECLARE_FUNCTION(exechttpgetrequest); \
	DECLARE_FUNCTION(execcallscriptfunc); \
	DECLARE_FUNCTION(execloadscript); \
	DECLARE_FUNCTION(execLuaStateInitCallback);


#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execopenlevel); \
	DECLARE_FUNCTION(execlogtoscreen); \
	DECLARE_FUNCTION(execdosthdelay); \
	DECLARE_FUNCTION(execdownloadassetfromcloudorlocal); \
	DECLARE_FUNCTION(exechttpgetrequest); \
	DECLARE_FUNCTION(execcallscriptfunc); \
	DECLARE_FUNCTION(execloadscript); \
	DECLARE_FUNCTION(execLuaStateInitCallback);


#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlua_GameInstance(); \
	friend struct Z_Construct_UClass_USlua_GameInstance_Statics; \
public: \
	DECLARE_CLASS(USlua_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/slua_primary"), NO_API) \
	DECLARE_SERIALIZER(USlua_GameInstance)


#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSlua_GameInstance(); \
	friend struct Z_Construct_UClass_USlua_GameInstance_Statics; \
public: \
	DECLARE_CLASS(USlua_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/slua_primary"), NO_API) \
	DECLARE_SERIALIZER(USlua_GameInstance)


#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlua_GameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlua_GameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlua_GameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlua_GameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlua_GameInstance(USlua_GameInstance&&); \
	NO_API USlua_GameInstance(const USlua_GameInstance&); \
public:


#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlua_GameInstance(USlua_GameInstance&&); \
	NO_API USlua_GameInstance(const USlua_GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlua_GameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlua_GameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USlua_GameInstance)


#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_PRIVATE_PROPERTY_OFFSET
#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_13_PROLOG
#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_SPARSE_DATA \
	MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_RPC_WRAPPERS \
	MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_INCLASS \
	MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_SPARSE_DATA \
	MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_INCLASS_NO_PURE_DECLS \
	MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUA_PRIMARY_API UClass* StaticClass<class USlua_GameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject7_Plugins_slua_primary_Source_slua_primary_Public_Slua_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
