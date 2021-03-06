﻿// Copyright Damian Buława 2017

#include "Escape.h"
#include "PositionReportRock.h"


// Sets default values for this component's properties
UPositionReportRock::UPositionReportRock()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReportRock::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Hi I'm a rock!"));
	
}


// Called every frame
void UPositionReportRock::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

