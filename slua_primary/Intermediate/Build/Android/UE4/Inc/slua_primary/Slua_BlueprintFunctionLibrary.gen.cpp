// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_primary/Public/Slua_BlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlua_BlueprintFunctionLibrary() {}
// Cross Module References
	SLUA_PRIMARY_API UClass* Z_Construct_UClass_USlua_BlueprintFunctionLibrary_NoRegister();
	SLUA_PRIMARY_API UClass* Z_Construct_UClass_USlua_BlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_slua_primary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USlua_BlueprintFunctionLibrary::execFVectordistance)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_v1);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_v2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USlua_BlueprintFunctionLibrary::FVectordistance(Z_Param_Out_v1,Z_Param_Out_v2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlua_BlueprintFunctionLibrary::execImagesetTexturefromrawimageundercontent)
	{
		P_GET_OBJECT(UImage,Z_Param_imagep);
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlua_BlueprintFunctionLibrary::ImagesetTexturefromrawimageundercontent(Z_Param_imagep,Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlua_BlueprintFunctionLibrary::execImagesetTexture)
	{
		P_GET_OBJECT(UImage,Z_Param_imagep);
		P_GET_OBJECT(UTexture,Z_Param_inp);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlua_BlueprintFunctionLibrary::ImagesetTexture(Z_Param_imagep,Z_Param_inp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlua_BlueprintFunctionLibrary::execisfileexist_undercontentfolder)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filename);
		P_GET_PROPERTY(FStrProperty,Z_Param_md5);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USlua_BlueprintFunctionLibrary::isfileexist_undercontentfolder(Z_Param_filename,Z_Param_md5);
		P_NATIVE_END;
	}
	void USlua_BlueprintFunctionLibrary::StaticRegisterNativesUSlua_BlueprintFunctionLibrary()
	{
		UClass* Class = USlua_BlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FVectordistance", &USlua_BlueprintFunctionLibrary::execFVectordistance },
			{ "ImagesetTexture", &USlua_BlueprintFunctionLibrary::execImagesetTexture },
			{ "ImagesetTexturefromrawimageundercontent", &USlua_BlueprintFunctionLibrary::execImagesetTexturefromrawimageundercontent },
			{ "isfileexist_undercontentfolder", &USlua_BlueprintFunctionLibrary::execisfileexist_undercontentfolder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics
	{
		struct Slua_BlueprintFunctionLibrary_eventFVectordistance_Parms
		{
			FVector v1;
			FVector v2;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_v2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_v1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Slua_BlueprintFunctionLibrary_eventFVectordistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics::NewProp_v2 = { "v2", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Slua_BlueprintFunctionLibrary_eventFVectordistance_Parms, v2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics::NewProp_v1 = { "v1", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Slua_BlueprintFunctionLibrary_eventFVectordistance_Parms, v1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics::NewProp_v2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics::NewProp_v1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lua library" },
		{ "ModuleRelativePath", "Public/Slua_BlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlua_BlueprintFunctionLibrary, nullptr, "FVectordistance", nullptr, nullptr, sizeof(Slua_BlueprintFunctionLibrary_eventFVectordistance_Parms), Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics
	{
		struct Slua_BlueprintFunctionLibrary_eventImagesetTexture_Parms
		{
			UImage* imagep;
			UTexture* inp;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_imagep_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_imagep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::NewProp_inp = { "inp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Slua_BlueprintFunctionLibrary_eventImagesetTexture_Parms, inp), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::NewProp_imagep_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::NewProp_imagep = { "imagep", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Slua_BlueprintFunctionLibrary_eventImagesetTexture_Parms, imagep), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::NewProp_imagep_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::NewProp_imagep_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::NewProp_inp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::NewProp_imagep,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lua library" },
		{ "ModuleRelativePath", "Public/Slua_BlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlua_BlueprintFunctionLibrary, nullptr, "ImagesetTexture", nullptr, nullptr, sizeof(Slua_BlueprintFunctionLibrary_eventImagesetTexture_Parms), Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics
	{
		struct Slua_BlueprintFunctionLibrary_eventImagesetTexturefromrawimageundercontent_Parms
		{
			UImage* imagep;
			FString path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_imagep_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_imagep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Slua_BlueprintFunctionLibrary_eventImagesetTexturefromrawimageundercontent_Parms, path), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::NewProp_imagep_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::NewProp_imagep = { "imagep", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Slua_BlueprintFunctionLibrary_eventImagesetTexturefromrawimageundercontent_Parms, imagep), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::NewProp_imagep_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::NewProp_imagep_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::NewProp_imagep,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lua library" },
		{ "ModuleRelativePath", "Public/Slua_BlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlua_BlueprintFunctionLibrary, nullptr, "ImagesetTexturefromrawimageundercontent", nullptr, nullptr, sizeof(Slua_BlueprintFunctionLibrary_eventImagesetTexturefromrawimageundercontent_Parms), Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics
	{
		struct Slua_BlueprintFunctionLibrary_eventisfileexist_undercontentfolder_Parms
		{
			FString filename;
			FString md5;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_md5;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Slua_BlueprintFunctionLibrary_eventisfileexist_undercontentfolder_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Slua_BlueprintFunctionLibrary_eventisfileexist_undercontentfolder_Parms), &Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::NewProp_md5 = { "md5", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Slua_BlueprintFunctionLibrary_eventisfileexist_undercontentfolder_Parms, md5), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Slua_BlueprintFunctionLibrary_eventisfileexist_undercontentfolder_Parms, filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::NewProp_md5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::NewProp_filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lua library" },
		{ "CPP_Default_md5", "" },
		{ "ModuleRelativePath", "Public/Slua_BlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlua_BlueprintFunctionLibrary, nullptr, "isfileexist_undercontentfolder", nullptr, nullptr, sizeof(Slua_BlueprintFunctionLibrary_eventisfileexist_undercontentfolder_Parms), Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USlua_BlueprintFunctionLibrary_NoRegister()
	{
		return USlua_BlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USlua_BlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlua_BlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_primary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlua_BlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_FVectordistance, "FVectordistance" }, // 615799534
		{ &Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexture, "ImagesetTexture" }, // 2798231499
		{ &Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_ImagesetTexturefromrawimageundercontent, "ImagesetTexturefromrawimageundercontent" }, // 309162170
		{ &Z_Construct_UFunction_USlua_BlueprintFunctionLibrary_isfileexist_undercontentfolder, "isfileexist_undercontentfolder" }, // 2117057780
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlua_BlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Slua_BlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Slua_BlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlua_BlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlua_BlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlua_BlueprintFunctionLibrary_Statics::ClassParams = {
		&USlua_BlueprintFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlua_BlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlua_BlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlua_BlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlua_BlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlua_BlueprintFunctionLibrary, 3292449501);
	template<> SLUA_PRIMARY_API UClass* StaticClass<USlua_BlueprintFunctionLibrary>()
	{
		return USlua_BlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlua_BlueprintFunctionLibrary(Z_Construct_UClass_USlua_BlueprintFunctionLibrary, &USlua_BlueprintFunctionLibrary::StaticClass, TEXT("/Script/slua_primary"), TEXT("USlua_BlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlua_BlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
