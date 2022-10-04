// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PanoramicCapture/Private/SceneCapturer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCapturer() {}
// Cross Module References
	PANORAMICCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessVolumeData();
	UPackage* Z_Construct_UPackage__Script_PanoramicCapture();
	ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
	PANORAMICCAPTURE_API UClass* Z_Construct_UClass_USceneCapturer_NoRegister();
	PANORAMICCAPTURE_API UClass* Z_Construct_UClass_USceneCapturer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FPostProcessVolumeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PANORAMICCAPTURE_API uint32 Get_Z_Construct_UScriptStruct_FPostProcessVolumeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPostProcessVolumeData, Z_Construct_UPackage__Script_PanoramicCapture(), TEXT("PostProcessVolumeData"), sizeof(FPostProcessVolumeData), Get_Z_Construct_UScriptStruct_FPostProcessVolumeData_Hash());
	}
	return Singleton;
}
template<> PANORAMICCAPTURE_API UScriptStruct* StaticStruct<FPostProcessVolumeData>()
{
	return FPostProcessVolumeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPostProcessVolumeData(FPostProcessVolumeData::StaticStruct, TEXT("/Script/PanoramicCapture"), TEXT("PostProcessVolumeData"), false, nullptr, nullptr);
static struct FScriptStruct_PanoramicCapture_StaticRegisterNativesFPostProcessVolumeData
{
	FScriptStruct_PanoramicCapture_StaticRegisterNativesFPostProcessVolumeData()
	{
		UScriptStruct::DeferCppStructOps<FPostProcessVolumeData>(FName(TEXT("PostProcessVolumeData")));
	}
} ScriptStruct_PanoramicCapture_StaticRegisterNativesFPostProcessVolumeData;
	struct Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SceneCapturer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPostProcessVolumeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Private/SceneCapturer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessVolumeData, Object), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::NewProp_Object,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PanoramicCapture,
		nullptr,
		&NewStructOps,
		"PostProcessVolumeData",
		sizeof(FPostProcessVolumeData),
		alignof(FPostProcessVolumeData),
		Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPostProcessVolumeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPostProcessVolumeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PanoramicCapture();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PostProcessVolumeData"), sizeof(FPostProcessVolumeData), Get_Z_Construct_UScriptStruct_FPostProcessVolumeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPostProcessVolumeData_Hash() { return 2429930335U; }
	void USceneCapturer::StaticRegisterNativesUSceneCapturer()
	{
	}
	UClass* Z_Construct_UClass_USceneCapturer_NoRegister()
	{
		return USceneCapturer::StaticClass();
	}
	struct Z_Construct_UClass_USceneCapturer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PPVolumeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PPVolumeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PPVolumeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureSceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneCapturer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PanoramicCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCapturer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SceneCapturer.h" },
		{ "ModuleRelativePath", "Private/SceneCapturer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCapturer_Statics::NewProp_PPVolumeArray_Inner = { "PPVolumeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPostProcessVolumeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCapturer_Statics::NewProp_PPVolumeArray_MetaData[] = {
		{ "Comment", "// store post process volumes data\n" },
		{ "ModuleRelativePath", "Private/SceneCapturer.h" },
		{ "ToolTip", "store post process volumes data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USceneCapturer_Statics::NewProp_PPVolumeArray = { "PPVolumeArray", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCapturer, PPVolumeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USceneCapturer_Statics::NewProp_PPVolumeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCapturer_Statics::NewProp_PPVolumeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCapturer_Statics::NewProp_CaptureSceneComponent_MetaData[] = {
		{ "Comment", "// CaptureSceneComponent will be used as parent of capturecomponents to provide world location and rotation.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SceneCapturer.h" },
		{ "ToolTip", "CaptureSceneComponent will be used as parent of capturecomponents to provide world location and rotation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneCapturer_Statics::NewProp_CaptureSceneComponent = { "CaptureSceneComponent", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USceneCapturer, CaptureSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USceneCapturer_Statics::NewProp_CaptureSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCapturer_Statics::NewProp_CaptureSceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneCapturer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCapturer_Statics::NewProp_PPVolumeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCapturer_Statics::NewProp_PPVolumeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCapturer_Statics::NewProp_CaptureSceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneCapturer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneCapturer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USceneCapturer_Statics::ClassParams = {
		&USceneCapturer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USceneCapturer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USceneCapturer_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USceneCapturer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCapturer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneCapturer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USceneCapturer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USceneCapturer, 174092224);
	template<> PANORAMICCAPTURE_API UClass* StaticClass<USceneCapturer>()
	{
		return USceneCapturer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneCapturer(Z_Construct_UClass_USceneCapturer, &USceneCapturer::StaticClass, TEXT("/Script/PanoramicCapture"), TEXT("USceneCapturer"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
