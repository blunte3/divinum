// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Divinum/BP_GM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_GM() {}
// Cross Module References
	DIVINUM_API UClass* Z_Construct_UClass_ABP_GM();
	DIVINUM_API UClass* Z_Construct_UClass_ABP_GM_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Divinum();
// End Cross Module References
	void ABP_GM::StaticRegisterNativesABP_GM()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABP_GM);
	UClass* Z_Construct_UClass_ABP_GM_NoRegister()
	{
		return ABP_GM::StaticClass();
	}
	struct Z_Construct_UClass_ABP_GM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_GM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Divinum,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_GM_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_GM_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BP_GM.h" },
		{ "ModuleRelativePath", "BP_GM.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_GM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_GM>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_GM_Statics::ClassParams = {
		&ABP_GM::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_GM_Statics::Class_MetaDataParams), Z_Construct_UClass_ABP_GM_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABP_GM()
	{
		if (!Z_Registration_Info_UClass_ABP_GM.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_GM.OuterSingleton, Z_Construct_UClass_ABP_GM_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABP_GM.OuterSingleton;
	}
	template<> DIVINUM_API UClass* StaticClass<ABP_GM>()
	{
		return ABP_GM::StaticClass();
	}
	ABP_GM::ABP_GM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_GM);
	ABP_GM::~ABP_GM() {}
	struct Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_BP_GM_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_BP_GM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABP_GM, ABP_GM::StaticClass, TEXT("ABP_GM"), &Z_Registration_Info_UClass_ABP_GM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_GM), 2232444239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_BP_GM_h_3233860424(TEXT("/Script/Divinum"),
		Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_BP_GM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_BP_GM_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
