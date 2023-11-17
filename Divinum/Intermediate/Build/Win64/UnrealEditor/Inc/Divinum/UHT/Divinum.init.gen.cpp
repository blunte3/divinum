// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDivinum_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Divinum;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Divinum()
	{
		if (!Z_Registration_Info_UPackage__Script_Divinum.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Divinum",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5075E55C,
				0x2C34D9EE,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Divinum.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Divinum.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Divinum(Z_Construct_UPackage__Script_Divinum, TEXT("/Script/Divinum"), Z_Registration_Info_UPackage__Script_Divinum, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5075E55C, 0x2C34D9EE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
