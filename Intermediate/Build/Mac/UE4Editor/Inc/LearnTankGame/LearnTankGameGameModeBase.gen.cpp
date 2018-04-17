// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "LearnTankGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearnTankGameGameModeBase() {}
// Cross Module References
	LEARNTANKGAME_API UClass* Z_Construct_UClass_ALearnTankGameGameModeBase_NoRegister();
	LEARNTANKGAME_API UClass* Z_Construct_UClass_ALearnTankGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LearnTankGame();
// End Cross Module References
	void ALearnTankGameGameModeBase::StaticRegisterNativesALearnTankGameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ALearnTankGameGameModeBase_NoRegister()
	{
		return ALearnTankGameGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ALearnTankGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_LearnTankGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "LearnTankGameGameModeBase.h" },
				{ "ModuleRelativePath", "LearnTankGameGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALearnTankGameGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALearnTankGameGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALearnTankGameGameModeBase, 1471046025);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALearnTankGameGameModeBase(Z_Construct_UClass_ALearnTankGameGameModeBase, &ALearnTankGameGameModeBase::StaticClass, TEXT("/Script/LearnTankGame"), TEXT("ALearnTankGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALearnTankGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
