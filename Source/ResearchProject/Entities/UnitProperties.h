// Code copyright © Raymond Cothern, 2015

#pragma once

#include "Components/ActorComponent.h"
#include "UnitProperties.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ETeam_Enum : uint8
{
	team1 	UMETA(DisplayName = "team1"),
	team2 	UMETA(DisplayName = "team2"),
	teamNone	UMETA(DisplayName = "teamNone")
};

USTRUCT()
struct RESEARCHPROJECT_API FResource{
	GENERATED_BODY()
	uint32 amount;
	uint32 maxAmount;
	enum class Type	{
		MANA,
		OTHER
	} type;
	float regenRate;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RESEARCHPROJECT_API UUnitProperties : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUnitProperties();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

		
	
};
