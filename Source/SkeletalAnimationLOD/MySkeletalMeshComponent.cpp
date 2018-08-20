// Fill out your copyright notice in the Description page of Project Settings.

#include "MySkeletalMeshComponent.h"


bool UMySkeletalMeshComponent::UpdateLODStatus()
{
	bool bUpdate = Super::UpdateLODStatus();

	if (AnimUpdateRateParams->LODToFrameSkipMap.Num() < 1)
	{
		int32 lodLevel = 0;
		AnimUpdateRateParams->LODToFrameSkipMap.Add(0, LOD0);
		AnimUpdateRateParams->LODToFrameSkipMap.Add(1, LOD1);
		AnimUpdateRateParams->LODToFrameSkipMap.Add(2, LOD2);

		AnimUpdateRateParams->bShouldUseLodMap = true;

		return true;
	}

	return bUpdate;
}
