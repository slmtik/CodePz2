// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseItem.generated.h"

UCLASS()
class CODEPZ2_API ABaseItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	//Visible anywhere, but not editable
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	//editable in defaults tab and in instances of class. In blueprints can call only getter
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName ItemName;

	//editable in defaults tab of class. can call in blueprint getter and setter
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float ItemWeight;

	//editable in instances of class. cannot call in blueprint getter or setter
	UPROPERTY(EditInstanceOnly)
	float ItemCost;
};
