// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "MySkeletalMeshComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Rendering, Common), hidecategories = Object, editinlinenew, meta = (BlueprintSpawnableComponent))
class SKELETALANIMATIONLOD_API UMySkeletalMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimationSkip")
		int32 LOD0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimationSkip")
		int32 LOD1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimationSkip")
		int32 LOD2;

	virtual bool UpdateLODStatus() override;	
};
