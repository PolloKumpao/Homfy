// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PanoramicCapture/Private/StereoStaticMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoStaticMeshComponent() {}
// Cross Module References
	PANORAMICCAPTURE_API UEnum* Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer();
	UPackage* Z_Construct_UPackage__Script_PanoramicCapture();
	PANORAMICCAPTURE_API UClass* Z_Construct_UClass_UStereoStaticMeshComponent_NoRegister();
	PANORAMICCAPTURE_API UClass* Z_Construct_UClass_UStereoStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
// End Cross Module References
	static UEnum* ESPStereoCameraLayer_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer, Z_Construct_UPackage__Script_PanoramicCapture(), TEXT("ESPStereoCameraLayer"));
		}
		return Singleton;
	}
	template<> PANORAMICCAPTURE_API UEnum* StaticEnum<ESPStereoCameraLayer>()
	{
		return ESPStereoCameraLayer_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESPStereoCameraLayer(ESPStereoCameraLayer_StaticEnum, TEXT("/Script/PanoramicCapture"), TEXT("ESPStereoCameraLayer"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer_Hash() { return 2310329788U; }
	UEnum* Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PanoramicCapture();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESPStereoCameraLayer"), 0, Get_Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESPStereoCameraLayer::LeftEye", (int64)ESPStereoCameraLayer::LeftEye },
				{ "ESPStereoCameraLayer::RightEye", (int64)ESPStereoCameraLayer::RightEye },
				{ "ESPStereoCameraLayer::BothEyes", (int64)ESPStereoCameraLayer::BothEyes },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BothEyes.Name", "ESPStereoCameraLayer::BothEyes" },
				{ "LeftEye.Name", "ESPStereoCameraLayer::LeftEye" },
				{ "ModuleRelativePath", "Private/StereoStaticMeshComponent.h" },
				{ "RightEye.Name", "ESPStereoCameraLayer::RightEye" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PanoramicCapture,
				nullptr,
				"ESPStereoCameraLayer",
				"ESPStereoCameraLayer",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UStereoStaticMeshComponent::StaticRegisterNativesUStereoStaticMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UStereoStaticMeshComponent_NoRegister()
	{
		return UStereoStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStereoStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EyeToRender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeToRender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EyeToRender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStereoStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PanoramicCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Object Activation Components|Activation Trigger" },
		{ "IncludePath", "StereoStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Private/StereoStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStereoStaticMeshComponent_Statics::NewProp_EyeToRender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoStaticMeshComponent_Statics::NewProp_EyeToRender_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Private/StereoStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStereoStaticMeshComponent_Statics::NewProp_EyeToRender = { "EyeToRender", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoStaticMeshComponent, EyeToRender), Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer, METADATA_PARAMS(Z_Construct_UClass_UStereoStaticMeshComponent_Statics::NewProp_EyeToRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoStaticMeshComponent_Statics::NewProp_EyeToRender_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStereoStaticMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoStaticMeshComponent_Statics::NewProp_EyeToRender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoStaticMeshComponent_Statics::NewProp_EyeToRender,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStereoStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoStaticMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStereoStaticMeshComponent_Statics::ClassParams = {
		&UStereoStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStereoStaticMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStereoStaticMeshComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStereoStaticMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStereoStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStereoStaticMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStereoStaticMeshComponent, 3418909632);
	template<> PANORAMICCAPTURE_API UClass* StaticClass<UStereoStaticMeshComponent>()
	{
		return UStereoStaticMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStereoStaticMeshComponent(Z_Construct_UClass_UStereoStaticMeshComponent, &UStereoStaticMeshComponent::StaticClass, TEXT("/Script/PanoramicCapture"), TEXT("UStereoStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoStaticMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
