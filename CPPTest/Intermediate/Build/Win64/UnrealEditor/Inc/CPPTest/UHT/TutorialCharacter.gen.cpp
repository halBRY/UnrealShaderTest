// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPTest/TutorialCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CPPTEST_API UClass* Z_Construct_UClass_ATutorialCharacter();
	CPPTEST_API UClass* Z_Construct_UClass_ATutorialCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CPPTest();
// End Cross Module References
	DEFINE_FUNCTION(ATutorialCharacter::execSpawnActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActor();
		P_NATIVE_END;
	}
	void ATutorialCharacter::StaticRegisterNativesATutorialCharacter()
	{
		UClass* Class = ATutorialCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnActor", &ATutorialCharacter::execSpawnActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATutorialCharacter_SpawnActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialCharacter_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "TutorialCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialCharacter_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialCharacter, nullptr, "SpawnActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialCharacter_SpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATutorialCharacter_SpawnActor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATutorialCharacter_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATutorialCharacter_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATutorialCharacter);
	UClass* Z_Construct_UClass_ATutorialCharacter_NoRegister()
	{
		return ATutorialCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATutorialCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorBPToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_actorBPToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_spawnPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATutorialCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPTest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATutorialCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATutorialCharacter_SpawnActor, "SpawnActor" }, // 3303239998
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TutorialCharacter.h" },
		{ "ModuleRelativePath", "TutorialCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialCharacter_Statics::NewProp_actorBPToSpawn_MetaData[] = {
		{ "Category", "TutorialCharacter" },
		{ "ModuleRelativePath", "TutorialCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATutorialCharacter_Statics::NewProp_actorBPToSpawn = { "actorBPToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATutorialCharacter, actorBPToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialCharacter_Statics::NewProp_actorBPToSpawn_MetaData), Z_Construct_UClass_ATutorialCharacter_Statics::NewProp_actorBPToSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialCharacter_Statics::NewProp_spawnPos_MetaData[] = {
		{ "Category", "TutorialCharacter" },
		{ "ModuleRelativePath", "TutorialCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATutorialCharacter_Statics::NewProp_spawnPos = { "spawnPos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATutorialCharacter, spawnPos), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialCharacter_Statics::NewProp_spawnPos_MetaData), Z_Construct_UClass_ATutorialCharacter_Statics::NewProp_spawnPos_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATutorialCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATutorialCharacter_Statics::NewProp_actorBPToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATutorialCharacter_Statics::NewProp_spawnPos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATutorialCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATutorialCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATutorialCharacter_Statics::ClassParams = {
		&ATutorialCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATutorialCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATutorialCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATutorialCharacter()
	{
		if (!Z_Registration_Info_UClass_ATutorialCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATutorialCharacter.OuterSingleton, Z_Construct_UClass_ATutorialCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATutorialCharacter.OuterSingleton;
	}
	template<> CPPTEST_API UClass* StaticClass<ATutorialCharacter>()
	{
		return ATutorialCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATutorialCharacter);
	ATutorialCharacter::~ATutorialCharacter() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_CPPTest_Source_CPPTest_TutorialCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CPPTest_Source_CPPTest_TutorialCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATutorialCharacter, ATutorialCharacter::StaticClass, TEXT("ATutorialCharacter"), &Z_Registration_Info_UClass_ATutorialCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATutorialCharacter), 450170816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CPPTest_Source_CPPTest_TutorialCharacter_h_669100164(TEXT("/Script/CPPTest"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_CPPTest_Source_CPPTest_TutorialCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CPPTest_Source_CPPTest_TutorialCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
