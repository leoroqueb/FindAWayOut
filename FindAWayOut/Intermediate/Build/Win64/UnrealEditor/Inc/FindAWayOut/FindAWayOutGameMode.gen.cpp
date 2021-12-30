// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindAWayOut/FindAWayOutGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindAWayOutGameMode() {}
// Cross Module References
	FINDAWAYOUT_API UClass* Z_Construct_UClass_AFindAWayOutGameMode_NoRegister();
	FINDAWAYOUT_API UClass* Z_Construct_UClass_AFindAWayOutGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FindAWayOut();
// End Cross Module References
	void AFindAWayOutGameMode::StaticRegisterNativesAFindAWayOutGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFindAWayOutGameMode_NoRegister()
	{
		return AFindAWayOutGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFindAWayOutGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFindAWayOutGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FindAWayOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFindAWayOutGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "FindAWayOutGameMode.h" },
		{ "ModuleRelativePath", "FindAWayOutGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFindAWayOutGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFindAWayOutGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFindAWayOutGameMode_Statics::ClassParams = {
		&AFindAWayOutGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFindAWayOutGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFindAWayOutGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFindAWayOutGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFindAWayOutGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFindAWayOutGameMode, 4008766227);
	template<> FINDAWAYOUT_API UClass* StaticClass<AFindAWayOutGameMode>()
	{
		return AFindAWayOutGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFindAWayOutGameMode(Z_Construct_UClass_AFindAWayOutGameMode, &AFindAWayOutGameMode::StaticClass, TEXT("/Script/FindAWayOut"), TEXT("AFindAWayOutGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFindAWayOutGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
