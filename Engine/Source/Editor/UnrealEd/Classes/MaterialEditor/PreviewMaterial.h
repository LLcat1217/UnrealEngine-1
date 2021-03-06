// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Materials/Material.h"

#include "PreviewMaterial.generated.h"

UCLASS()
class UNREALED_API UPreviewMaterial : public UMaterial
{
	GENERATED_UCLASS_BODY()


	//~ Begin UMaterial Interface.
	virtual FMaterialResource* AllocateResource() override;
	virtual bool IsAsset()  const override  { return false; }
	//~ End UMaterial Interface.
};

