// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPUniqueNetId;
enum class EBlueprintAsyncResultSwitch : uint8;
enum class SteamAvatarSize : uint8;
class UTexture2D;
#ifdef ADVANCEDSTEAMSESSIONS_AdvancedSteamFriendsLibrary_generated_h
#error "AdvancedSteamFriendsLibrary.generated.h already included, missing '#pragma once' in AdvancedSteamFriendsLibrary.h"
#endif
#define ADVANCEDSTEAMSESSIONS_AdvancedSteamFriendsLibrary_generated_h

#define Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateSteamIDFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SteamID64); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPUniqueNetId*)Z_Param__Result=UAdvancedSteamFriendsLibrary::CreateSteamIDFromString(Z_Param_SteamID64); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamPersonaName) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAdvancedSteamFriendsLibrary::GetSteamPersonaName(Z_Param_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendSteamLevel) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAdvancedSteamFriendsLibrary::GetFriendSteamLevel(Z_Param_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestSteamFriendInfo) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_UBOOL(Z_Param_bRequireNameOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdvancedSteamFriendsLibrary::RequestSteamFriendInfo(Z_Param_UniqueNetId,Z_Param_bRequireNameOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamFriendAvatar) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_ENUM_REF(EBlueprintAsyncResultSwitch,Z_Param_Out_Result); \
		P_GET_ENUM(SteamAvatarSize,Z_Param_AvatarSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UAdvancedSteamFriendsLibrary::GetSteamFriendAvatar(Z_Param_UniqueNetId,(EBlueprintAsyncResultSwitch&)(Z_Param_Out_Result),SteamAvatarSize(Z_Param_AvatarSize)); \
		P_NATIVE_END; \
	}


#define Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateSteamIDFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SteamID64); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPUniqueNetId*)Z_Param__Result=UAdvancedSteamFriendsLibrary::CreateSteamIDFromString(Z_Param_SteamID64); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamPersonaName) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAdvancedSteamFriendsLibrary::GetSteamPersonaName(Z_Param_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendSteamLevel) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAdvancedSteamFriendsLibrary::GetFriendSteamLevel(Z_Param_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestSteamFriendInfo) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_UBOOL(Z_Param_bRequireNameOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdvancedSteamFriendsLibrary::RequestSteamFriendInfo(Z_Param_UniqueNetId,Z_Param_bRequireNameOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamFriendAvatar) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_ENUM_REF(EBlueprintAsyncResultSwitch,Z_Param_Out_Result); \
		P_GET_ENUM(SteamAvatarSize,Z_Param_AvatarSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UAdvancedSteamFriendsLibrary::GetSteamFriendAvatar(Z_Param_UniqueNetId,(EBlueprintAsyncResultSwitch&)(Z_Param_Out_Result),SteamAvatarSize(Z_Param_AvatarSize)); \
		P_NATIVE_END; \
	}


#define Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedSteamFriendsLibrary(); \
	friend ADVANCEDSTEAMSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedSteamFriendsLibrary(); \
public: \
	DECLARE_CLASS(UAdvancedSteamFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSteamSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSteamFriendsLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedSteamFriendsLibrary(); \
	friend ADVANCEDSTEAMSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedSteamFriendsLibrary(); \
public: \
	DECLARE_CLASS(UAdvancedSteamFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSteamSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSteamFriendsLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSteamFriendsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSteamFriendsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSteamFriendsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSteamFriendsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSteamFriendsLibrary(UAdvancedSteamFriendsLibrary&&); \
	NO_API UAdvancedSteamFriendsLibrary(const UAdvancedSteamFriendsLibrary&); \
public:


#define Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSteamFriendsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSteamFriendsLibrary(UAdvancedSteamFriendsLibrary&&); \
	NO_API UAdvancedSteamFriendsLibrary(const UAdvancedSteamFriendsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSteamFriendsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSteamFriendsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSteamFriendsLibrary)


#define Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_PRIVATE_PROPERTY_OFFSET
#define Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_33_PROLOG
#define Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_PRIVATE_PROPERTY_OFFSET \
	Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_RPC_WRAPPERS \
	Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_INCLASS \
	Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_PRIVATE_PROPERTY_OFFSET \
	Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_INCLASS_NO_PURE_DECLS \
	Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Boulder_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h


#define FOREACH_ENUM_STEAMAVATARSIZE(op) \
	op(SteamAvatarSize::SteamAvatar_Small) \
	op(SteamAvatarSize::SteamAvatar_Medium) \
	op(SteamAvatarSize::SteamAvatar_Large) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
