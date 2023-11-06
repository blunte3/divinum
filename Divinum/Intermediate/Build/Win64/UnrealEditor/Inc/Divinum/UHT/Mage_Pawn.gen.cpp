// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Divinum/Mage_Pawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMage_Pawn() {}
// Cross Module References
	DIVINUM_API UClass* Z_Construct_UClass_AMage_Pawn();
	DIVINUM_API UClass* Z_Construct_UClass_AMage_Pawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Divinum();
// End Cross Module References
	void AMage_Pawn::StaticRegisterNativesAMage_Pawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMage_Pawn);
	UClass* Z_Construct_UClass_AMage_Pawn_NoRegister()
	{
		return AMage_Pawn::StaticClass();
	}
	struct Z_Construct_UClass_AMage_Pawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMage_Pawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Divinum,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMage_Pawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMage_Pawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Mage_Pawn.h" },
		{ "ModuleRelativePath", "Mage_Pawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMage_Pawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMage_Pawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMage_Pawn_Statics::ClassParams = {
		&AMage_Pawn::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMage_Pawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMage_Pawn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMage_Pawn()
	{
		if (!Z_Registration_Info_UClass_AMage_Pawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMage_Pawn.OuterSingleton, Z_Construct_UClass_AMage_Pawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMage_Pawn.OuterSingleton;
	}
	template<> DIVINUM_API UClass* StaticClass<AMage_Pawn>()
	{
		return AMage_Pawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMage_Pawn);
	AMage_Pawn::~AMage_Pawn() {}
	struct Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_Mage_Pawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_Mage_Pawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMage_Pawn, AMage_Pawn::StaticClass, TEXT("AMage_Pawn"), &Z_Registration_Info_UClass_AMage_Pawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMage_Pawn), 556927206U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_Mage_Pawn_h_974048386(TEXT("/Script/Divinum"),
		Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_Mage_Pawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Abhi_Dropbox_PC_Documents_GitHub_divinum_Divinum_Source_Divinum_Mage_Pawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
