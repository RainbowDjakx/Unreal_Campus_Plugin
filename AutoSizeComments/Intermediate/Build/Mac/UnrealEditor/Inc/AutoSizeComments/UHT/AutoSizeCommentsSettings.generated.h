// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoSizeCommentsSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSIZECOMMENTS_AutoSizeCommentsSettings_generated_h
#error "AutoSizeCommentsSettings.generated.h already included, missing '#pragma once' in AutoSizeCommentsSettings.h"
#endif
#define AUTOSIZECOMMENTS_AutoSizeCommentsSettings_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPresetCommentStyle_Statics; \
	AUTOSIZECOMMENTS_API static class UScriptStruct* StaticStruct();


template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<struct FPresetCommentStyle>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FASCGraphSettings_Statics; \
	AUTOSIZECOMMENTS_API static class UScriptStruct* StaticStruct();


template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<struct FASCGraphSettings>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoSizeCommentsSettings(); \
	friend struct Z_Construct_UClass_UAutoSizeCommentsSettings_Statics; \
public: \
	DECLARE_CLASS(UAutoSizeCommentsSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoSizeComments"), NO_API) \
	DECLARE_SERIALIZER(UAutoSizeCommentsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_112_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAutoSizeCommentsSettings(UAutoSizeCommentsSettings&&); \
	UAutoSizeCommentsSettings(const UAutoSizeCommentsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoSizeCommentsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoSizeCommentsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoSizeCommentsSettings) \
	NO_API virtual ~UAutoSizeCommentsSettings();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_109_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_112_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSIZECOMMENTS_API UClass* StaticClass<class UAutoSizeCommentsSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h


#define FOREACH_ENUM_EASCCACHESAVEMETHOD(op) \
	op(EASCCacheSaveMethod::File) \
	op(EASCCacheSaveMethod::MetaData) 

enum class EASCCacheSaveMethod : uint8;
template<> struct TIsUEnumClass<EASCCacheSaveMethod> { enum { Value = true }; };
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<EASCCacheSaveMethod>();

#define FOREACH_ENUM_EASCCACHESAVELOCATION(op) \
	op(EASCCacheSaveLocation::Plugin) \
	op(EASCCacheSaveLocation::Project) 

enum class EASCCacheSaveLocation : uint8;
template<> struct TIsUEnumClass<EASCCacheSaveLocation> { enum { Value = true }; };
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<EASCCacheSaveLocation>();

#define FOREACH_ENUM_EASCRESIZINGMODE(op) \
	op(EASCResizingMode::Always) \
	op(EASCResizingMode::Reactive) \
	op(EASCResizingMode::Disabled) 

enum class EASCResizingMode : uint8;
template<> struct TIsUEnumClass<EASCResizingMode> { enum { Value = true }; };
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<EASCResizingMode>();

#define FOREACH_ENUM_ECOMMENTCOLLISIONMETHOD(op) \
	op(ECommentCollisionMethod::Point) \
	op(ECommentCollisionMethod::Intersect) \
	op(ECommentCollisionMethod::Contained) \
	op(ECommentCollisionMethod::Disabled) 

enum class ECommentCollisionMethod : uint8;
template<> struct TIsUEnumClass<ECommentCollisionMethod> { enum { Value = true }; };
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<ECommentCollisionMethod>();

#define FOREACH_ENUM_EASCAUTOINSERTCOMMENT(op) \
	op(EASCAutoInsertComment::Never) \
	op(EASCAutoInsertComment::Always) \
	op(EASCAutoInsertComment::Surrounded) 

enum class EASCAutoInsertComment : uint8;
template<> struct TIsUEnumClass<EASCAutoInsertComment> { enum { Value = true }; };
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<EASCAutoInsertComment>();

#define FOREACH_ENUM_EASCDEFAULTCOMMENTCOLORMETHOD(op) \
	op(EASCDefaultCommentColorMethod::None) \
	op(EASCDefaultCommentColorMethod::Random) \
	op(EASCDefaultCommentColorMethod::Default) 

enum class EASCDefaultCommentColorMethod : uint8;
template<> struct TIsUEnumClass<EASCDefaultCommentColorMethod> { enum { Value = true }; };
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<EASCDefaultCommentColorMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
