// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseItem.h"

// Sets default values
ABaseItem::ABaseItem()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	RootComponent = Mesh;
}

// Called when the game starts or when spawned
void ABaseItem::BeginPlay()
{
	Super::BeginPlay();
	
}

