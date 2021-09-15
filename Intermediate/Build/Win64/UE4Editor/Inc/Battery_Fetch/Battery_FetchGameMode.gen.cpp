// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Battery_Fetch/Battery_FetchGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattery_FetchGameMode() {}
// Cross Module References
	BATTERY_FETCH_API UClass* Z_Construct_UClass_ABattery_FetchGameMode_NoRegister();
	BATTERY_FETCH_API UClass* Z_Construct_UClass_ABattery_FetchGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Battery_Fetch();
// End Cross Module References
	void ABattery_FetchGameMode::StaticRegisterNativesABattery_FetchGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABattery_FetchGameMode_NoRegister()
	{
		return ABattery_FetchGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABattery_FetchGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattery_FetchGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Battery_Fetch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_FetchGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Battery_FetchGameMode.h" },
		{ "ModuleRelativePath", "Battery_FetchGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattery_FetchGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattery_FetchGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattery_FetchGameMode_Statics::ClassParams = {
		&ABattery_FetchGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABattery_FetchGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_FetchGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattery_FetchGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattery_FetchGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattery_FetchGameMode, 124922993);
	template<> BATTERY_FETCH_API UClass* StaticClass<ABattery_FetchGameMode>()
	{
		return ABattery_FetchGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattery_FetchGameMode(Z_Construct_UClass_ABattery_FetchGameMode, &ABattery_FetchGameMode::StaticClass, TEXT("/Script/Battery_Fetch"), TEXT("ABattery_FetchGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattery_FetchGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
