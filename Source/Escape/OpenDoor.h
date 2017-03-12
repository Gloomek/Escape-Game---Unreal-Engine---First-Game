// Copyright Damian Buława 2017

#pragma once

#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void OpenDoor();
	virtual void CloseDoor();

private:
	UPROPERTY(VisibleAnywhere)
	float OpenAngle = -102.0F;

	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate;

	UPROPERTY(EditAnywhere)
	float DoorColseDelay = 0.62F;

	UPROPERTY(VisibleAnywhere)
	float LastDoorOpenTime = 99999.F;

	AActor* ActorThatOpens;
	AActor* Owner;

};
