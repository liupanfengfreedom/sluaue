// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeslua_primary_init() {}
	SLUA_PRIMARY_API UFunction* Z_Construct_UDelegateFunction_USlua_GameInstance_OnAssetdownloadFailedm__DelegateSignature();
	SLUA_PRIMARY_API UFunction* Z_Construct_UDelegateFunction_USlua_GameInstance_OnAssetdownloadFailed__DelegateSignature();
	SLUA_PRIMARY_API UFunction* Z_Construct_UDelegateFunction_USlua_GameInstance_OnAssetdownloadingevent__DelegateSignature();
	SLUA_PRIMARY_API UFunction* Z_Construct_UDelegateFunction_USlua_GameInstance_OnAssetdownloadCompeletvent__DelegateSignature();
	SLUA_PRIMARY_API UFunction* Z_Construct_UDelegateFunction_USlua_GameInstance_OnAssetfoundvent__DelegateSignature();
	SLUA_PRIMARY_API UFunction* Z_Construct_UDelegateFunction_USlua_GameInstance_OnRequestCompleted__DelegateSignature();
	SLUA_PRIMARY_API UFunction* Z_Construct_UDelegateFunction_USlua_GameInstance_OnTimeupdelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_slua_primary()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_USlua_GameInstance_OnAssetdownloadFailedm__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USlua_GameInstance_OnAssetdownloadFailed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USlua_GameInstance_OnAssetdownloadingevent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USlua_GameInstance_OnAssetdownloadCompeletvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USlua_GameInstance_OnAssetfoundvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USlua_GameInstance_OnRequestCompleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USlua_GameInstance_OnTimeupdelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/slua_primary",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD2C7D711,
				0x156BFCAF,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
