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
	void ADefaultToken::StaticRegisterNativesADefaultToken()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultToken);
	UClass* Z_Construct_UClass_ADefaultToken_NoRegister()
	{
		return ADefaultToken::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultToken_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_ADefaultToken, ADefaultToken::StaticClass, TEXT("ADefaultToken"), &Z_Registration_Info_UClass_ADefaultToken, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultToken), 3503863496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_DefaultToken_h_1849815992(TEXT("/Script/Divinum"),
		Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_DefaultToken_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_DefaultToken_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS