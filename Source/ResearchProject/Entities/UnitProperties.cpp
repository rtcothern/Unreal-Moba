// Code copyright © Raymond Cothern, 2015

#include "ResearchProject.h"
#include "UnitProperties.h"


// Sets default values for this component's properties
UUnitProperties::UUnitProperties()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UUnitProperties::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UUnitProperties::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

