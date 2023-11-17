// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Divinum/DefaultToken.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultToken() {}
// Cross Module References
	DIVINUM_API UClass* Z_Construct_UClass_ADefaultToken();
	DIVINUM_API UClass* Z_Construct_UClass_ADefaultToken_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Divinum();
// End Cross Module References
	DEFINE_FUNCTION(ADefaultToken::execMoveRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultToken::execMoveLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultToken::execMoveBackward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveBackward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultToken::execMoveForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward();
		P_NATIVE_END;
	}
	void ADefaultToken::StaticRegisterNativesADefaultToken()
	{
		UClass* Class = ADefaultToken::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveBackward", &ADefaultToken::execMoveBackward },
			{ "MoveForward", &ADefaultToken::execMoveForward },
			{ "MoveLeft", &ADefaultToken::execMoveLeft },
			{ "MoveRight", &ADefaultToken::execMoveRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefaultToken_MoveBackward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultToken_MoveBackward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "DefaultToken.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultToken_MoveBackward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultToken, nullptr, "MoveBackward", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultToken_MoveBackward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefaultToken_MoveBackward_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADefaultToken_MoveBackward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultToken_MoveBackward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultToken_MoveForward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultToken_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "DefaultToken.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultToken_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultToken, nullptr, "MoveForward", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultToken_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefaultToken_MoveForward_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADefaultToken_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultToken_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultToken_MoveLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultToken_MoveLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "DefaultToken.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultToken_MoveLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultToken, nullptr, "MoveLeft", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultToken_MoveLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefaultToken_MoveLeft_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADefaultToken_MoveLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultToken_MoveLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultToken_MoveRight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultToken_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "DefaultToken.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultToken_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultToken, nullptr, "MoveRight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultToken_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefaultToken_MoveRight_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADefaultToken_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultToken_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultToken);
	UClass* Z_Construct_UClass_ADefaultToken_NoRegister()
	{
		return ADefaultToken::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultToken_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultToken_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Divinum,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultToken_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefaultToken_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultToken_MoveBackward, "MoveBackward" }, // 3981733185
		{ &Z_Construct_UFunction_ADefaultToken_MoveForward, "MoveForward" }, // 1975779208
		{ &Z_Construct_UFunction_ADefaultToken_MoveLeft, "MoveLeft" }, // 4220827473
		{ &Z_Construct_UFunction_ADefaultToken_MoveRight, "MoveRight" }, // 1644635283
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultToken_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultToken_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DefaultToken.h" },
		{ "ModuleRelativePath", "DefaultToken.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultToken_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultToken>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultToken_Statics::ClassParams = {
		&ADefaultToken::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultToken_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefaultToken_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADefaultToken()
	{
		if (!Z_Registration_Info_UClass_ADefaultToken.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultToken.OuterSingleton, Z_Construct_UClass_ADefaultToken_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADefaultToken.OuterSingleton;
	}
	template<> DIVINUM_API UClass* StaticClass<ADefaultToken>()
	{
		return ADefaultToken::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultToken);
	ADefaultToken::~ADefaultToken() {}
	struct Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_DefaultToken_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_DefaultToken_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultToken, ADefaultToken::StaticClass, TEXT("ADefaultToken"), &Z_Registration_Info_UClass_ADefaultToken, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultToken), 4077953122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_DefaultToken_h_1527998645(TEXT("/Script/Divinum"),
		Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_DefaultToken_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_DefaultToken_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
