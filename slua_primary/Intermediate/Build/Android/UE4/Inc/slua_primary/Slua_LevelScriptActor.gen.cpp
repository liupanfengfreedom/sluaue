// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_primary/Public/Slua_LevelScriptActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlua_LevelScriptActor() {}
// Cross Module References
	SLUA_PRIMARY_API UClass* Z_Construct_UClass_ASlua_LevelScriptActor_NoRegister();
	SLUA_PRIMARY_API UClass* Z_Construct_UClass_ASlua_LevelScriptActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_slua_primary();
// End Cross Module References
	static FName NAME_ASlua_LevelScriptActor_slua_BeginPlay = FName(TEXT("slua_BeginPlay"));
	void ASlua_LevelScriptActor::slua_BeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASlua_LevelScriptActor_slua_BeginPlay),NULL);
	}
	void ASlua_LevelScriptActor::StaticRegisterNativesASlua_LevelScriptActor()
	{
	}
	struct Z_Construct_UFunction_ASlua_LevelScriptActor_slua_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASlua_LevelScriptActor_slua_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Slua_LevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASlua_LevelScriptActor_slua_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASlua_LevelScriptActor, nullptr, "slua_BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASlua_LevelScriptActor_slua_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASlua_LevelScriptActor_slua_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASlua_LevelScriptActor_slua_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASlua_LevelScriptActor_slua_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASlua_LevelScriptActor_NoRegister()
	{
		return ASlua_LevelScriptActor::StaticClass();
	}
	struct Z_Construct_UClass_ASlua_LevelScriptActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASlua_LevelScriptActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_primary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASlua_LevelScriptActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASlua_LevelScriptActor_slua_BeginPlay, "slua_BeginPlay" }, // 1605214042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlua_LevelScriptActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Slua_LevelScriptActor.h" },
		{ "ModuleRelativePath", "Public/Slua_LevelScriptActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASlua_LevelScriptActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlua_LevelScriptActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASlua_LevelScriptActor_Statics::ClassParams = {
		&ASlua_LevelScriptActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASlua_LevelScriptActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASlua_LevelScriptActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASlua_LevelScriptActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASlua_LevelScriptActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASlua_LevelScriptActor, 1538747943);
	template<> SLUA_PRIMARY_API UClass* StaticClass<ASlua_LevelScriptActor>()
	{
		return ASlua_LevelScriptActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASlua_LevelScriptActor(Z_Construct_UClass_ASlua_LevelScriptActor, &ASlua_LevelScriptActor::StaticClass, TEXT("/Script/slua_primary"), TEXT("ASlua_LevelScriptActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlua_LevelScriptActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
