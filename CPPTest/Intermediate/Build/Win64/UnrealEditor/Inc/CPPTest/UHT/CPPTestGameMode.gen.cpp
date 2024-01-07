// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPTest/CPPTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPPTestGameMode() {}
// Cross Module References
	CPPTEST_API UClass* Z_Construct_UClass_ACPPTestGameMode();
	CPPTEST_API UClass* Z_Construct_UClass_ACPPTestGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPPTest();
// End Cross Module References
	void ACPPTestGameMode::StaticRegisterNativesACPPTestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPPTestGameMode);
	UClass* Z_Construct_UClass_ACPPTestGameMode_NoRegister()
	{
		return ACPPTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACPPTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPPTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPTest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPPTestGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPPTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPPTestGameMode.h" },
		{ "ModuleRelativePath", "CPPTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPPTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPPTestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPPTestGameMode_Statics::ClassParams = {
		&ACPPTestGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPPTestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPPTestGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACPPTestGameMode()
	{
		if (!Z_Registration_Info_UClass_ACPPTestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPPTestGameMode.OuterSingleton, Z_Construct_UClass_ACPPTestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPPTestGameMode.OuterSingleton;
	}
	template<> CPPTEST_API UClass* StaticClass<ACPPTestGameMode>()
	{
		return ACPPTestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPPTestGameMode);
	ACPPTestGameMode::~ACPPTestGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_CPPTest_Source_CPPTest_CPPTestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CPPTest_Source_CPPTest_CPPTestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPPTestGameMode, ACPPTestGameMode::StaticClass, TEXT("ACPPTestGameMode"), &Z_Registration_Info_UClass_ACPPTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPPTestGameMode), 1180942229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CPPTest_Source_CPPTest_CPPTestGameMode_h_1135609371(TEXT("/Script/CPPTest"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_CPPTest_Source_CPPTest_CPPTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CPPTest_Source_CPPTest_CPPTestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
