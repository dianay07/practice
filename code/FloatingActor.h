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
	//�� ���� ������Ƽ�� �⺻���� �����մϴ�
	AFloatingActor();

protected:
	// ���� ���� �Ǵ� ������ ȣ��˴ϴ�
	virtual void BeginPlay() override;

public:	
	// �� ������ ȣ��˴ϴ�
	virtual void Tick(float DeltaTime) override;

	float RunningTime;
	
};
