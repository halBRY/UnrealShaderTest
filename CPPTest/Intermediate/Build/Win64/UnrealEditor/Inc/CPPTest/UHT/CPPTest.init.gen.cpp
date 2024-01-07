// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPPTest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CPPTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CPPTest()
	{
		if (!Z_Registration_Info_UPackage__Script_CPPTest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CPPTest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x78FC6CCB,
				0xF9D54FF8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CPPTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CPPTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CPPTest(Z_Construct_UPackage__Script_CPPTest, TEXT("/Script/CPPTest"), Z_Registration_Info_UPackage__Script_CPPTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x78FC6CCB, 0xF9D54FF8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
