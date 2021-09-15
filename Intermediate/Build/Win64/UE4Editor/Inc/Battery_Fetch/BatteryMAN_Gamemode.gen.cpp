// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Battery_Fetch/BatteryMAN_Gamemode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryMAN_Gamemode() {}
// Cross Module References
	BATTERY_FETCH_API UClass* Z_Construct_UClass_ABatteryMAN_Gamemode_NoRegister();
	BATTERY_FETCH_API UClass* Z_Construct_UClass_ABatteryMAN_Gamemode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Battery_Fetch();
// End Cross Module References
	void ABatteryMAN_Gamemode::StaticRegisterNativesABatteryMAN_Gamemode()
	{
	}
	UClass* Z_Construct_UClass_ABatteryMAN_Gamemode_NoRegister()
	{
		return ABatteryMAN_Gamemode::StaticClass();
	}
	struct Z_Construct_UClass_ABatteryMAN_Gamemode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatteryMAN_Gamemode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Battery_Fetch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryMAN_Gamemode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BatteryMAN_Gamemode.h" },
		{ "ModuleRelativePath", "BatteryMAN_Gamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatteryMAN_Gamemode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryMAN_Gamemode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABatteryMAN_Gamemode_Statics::ClassParams = {
		&ABatteryMAN_Gamemode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABatteryMAN_Gamemode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryMAN_Gamemode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatteryMAN_Gamemode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABatteryMAN_Gamemode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatteryMAN_Gamemode, 3622425790);
	template<> BATTERY_FETCH_API UClass* StaticClass<ABatteryMAN_Gamemode>()
	{
		return ABatteryMAN_Gamemode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryMAN_Gamemode(Z_Construct_UClass_ABatteryMAN_Gamemode, &ABatteryMAN_Gamemode::StaticClass, TEXT("/Script/Battery_Fetch"), TEXT("ABatteryMAN_Gamemode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryMAN_Gamemode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
