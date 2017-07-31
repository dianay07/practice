// Fill out your copyright notice in the Description page of Project Settings.

#include "FloatingActor.h"


// �⺻���� �����մϴ�
AFloatingActor::AFloatingActor()
{
 	//�� ���Ͱ� ��� �����Ӹ��� Tick() ȣ���ϵ��� �����մϴ�. �ʿ�ġ ���� ��� ���ָ� �����ս��� ���˴ϴ�
	PrimaryActorTick.bCanEverTick = true;

}

// ���� ���۽� �Ǵ� ������ ȣ��˴ϴ�
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// ��� �����Ӹ��� ȣ��˴ϴ�
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * 20.0f;       //���̿� 20 �� ���մϴ�
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
}

