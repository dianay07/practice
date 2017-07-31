// Fill out your copyright notice in the Description page of Project Settings.

#include "FloatingActor.h"


// 기본값을 설정합니다
AFloatingActor::AFloatingActor()
{
 	//이 액터가 모든 프레임마다 Tick() 호출하도록 설정합니다. 필요치 않은 경우 꺼주면 퍼포먼스가 향상됩니다
	PrimaryActorTick.bCanEverTick = true;

}

// 게임 시작시 또는 스폰시 호출됩니다
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// 모든 프레임마다 호출됩니다
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * 20.0f;       //높이에 20 을 곱합니다
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
}

