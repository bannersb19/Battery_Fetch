// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BATTERY_FETCH_BatteryMAN_generated_h
#error "BatteryMAN.generated.h already included, missing '#pragma once' in BatteryMAN.h"
#endif
#define BATTERY_FETCH_BatteryMAN_generated_h

#define Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_SPARSE_DATA
#define Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryMAN(); \
	friend struct Z_Construct_UClass_ABatteryMAN_Statics; \
public: \
	DECLARE_CLASS(ABatteryMAN, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battery_Fetch"), NO_API) \
	DECLARE_SERIALIZER(ABatteryMAN)


#define Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_INCLASS \
private: \
	static void StaticRegisterNativesABatteryMAN(); \
	friend struct Z_Construct_UClass_ABatteryMAN_Statics; \
public: \
	DECLARE_CLASS(ABatteryMAN, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battery_Fetch"), NO_API) \
	DECLARE_SERIALIZER(ABatteryMAN)


#define Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryMAN(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryMAN) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryMAN); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryMAN); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryMAN(ABatteryMAN&&); \
	NO_API ABatteryMAN(const ABatteryMAN&); \
public:


#define Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryMAN(ABatteryMAN&&); \
	NO_API ABatteryMAN(const ABatteryMAN&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryMAN); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryMAN); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryMAN)


#define Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_PRIVATE_PROPERTY_OFFSET
#define Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_21_PROLOG
#define Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_PRIVATE_PROPERTY_OFFSET \
	Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_SPARSE_DATA \
	Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_RPC_WRAPPERS \
	Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_INCLASS \
	Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_PRIVATE_PROPERTY_OFFSET \
	Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_SPARSE_DATA \
	Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_INCLASS_NO_PURE_DECLS \
	Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERY_FETCH_API UClass* StaticClass<class ABatteryMAN>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battery_Fetch_Source_Battery_Fetch_BatteryMAN_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
