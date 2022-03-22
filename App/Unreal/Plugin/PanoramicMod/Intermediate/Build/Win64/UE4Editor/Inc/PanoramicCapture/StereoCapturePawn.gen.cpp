// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PanoramicCapture/Public/StereoCapturePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoCapturePawn() {}
// Cross Module References
	PANORAMICCAPTURE_API UClass* Z_Construct_UClass_AStereoCapturePawn_NoRegister();
	PANORAMICCAPTURE_API UClass* Z_Construct_UClass_AStereoCapturePawn();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	UPackage* Z_Construct_UPackage__Script_PanoramicCapture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStereoCapturePawn::execUpdateStereoAtlas)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateStereoAtlas(Z_Param_WorldContextObject,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	void AStereoCapturePawn::StaticRegisterNativesAStereoCapturePawn()
	{
		UClass* Class = AStereoCapturePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateStereoAtlas", &AStereoCapturePawn::execUpdateStereoAtlas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics
	{
		struct StereoCapturePawn_eventUpdateStereoAtlas_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoCapturePawn_eventUpdateStereoAtlas_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoCapturePawn_eventUpdateStereoAtlas_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/StereoCapturePawn.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStereoCapturePawn, nullptr, "UpdateStereoAtlas", nullptr, nullptr, sizeof(StereoCapturePawn_eventUpdateStereoAtlas_Parms), Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStereoCapturePawn_NoRegister()
	{
		return AStereoCapturePawn::StaticClass();
	}
	struct Z_Construct_UClass_AStereoCapturePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEyeAtlas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftEyeAtlas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEyeAtlas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightEyeAtlas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStereoCapturePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PanoramicCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStereoCapturePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas, "UpdateStereoAtlas" }, // 2446351561
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStereoCapturePawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StereoCapturePawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StereoCapturePawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_LeftEyeAtlas_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/StereoCapturePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_LeftEyeAtlas = { "LeftEyeAtlas", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStereoCapturePawn, LeftEyeAtlas), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_LeftEyeAtlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_LeftEyeAtlas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_RightEyeAtlas_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/StereoCapturePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_RightEyeAtlas = { "RightEyeAtlas", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStereoCapturePawn, RightEyeAtlas), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_RightEyeAtlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_RightEyeAtlas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStereoCapturePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_LeftEyeAtlas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_RightEyeAtlas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStereoCapturePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStereoCapturePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStereoCapturePawn_Statics::ClassParams = {
		&AStereoCapturePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStereoCapturePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStereoCapturePawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStereoCapturePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStereoCapturePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStereoCapturePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStereoCapturePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStereoCapturePawn, 2023548750);
	template<> PANORAMICCAPTURE_API UClass* StaticClass<AStereoCapturePawn>()
	{
		return AStereoCapturePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStereoCapturePawn(Z_Construct_UClass_AStereoCapturePawn, &AStereoCapturePawn::StaticClass, TEXT("/Script/PanoramicCapture"), TEXT("AStereoCapturePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStereoCapturePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
