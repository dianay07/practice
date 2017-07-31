// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class PRACTICE_API AFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	//이 액터 프로퍼티의 기본값을 설정합니다
	AFloatingActor();

protected:
	// 게임 시작 또는 스폰시 호출됩니다
	virtual void BeginPlay() override;

public:	
	// 매 프레임 호출됩니다
	virtual void Tick(float DeltaTime) override;

	float RunningTime;
	
};
