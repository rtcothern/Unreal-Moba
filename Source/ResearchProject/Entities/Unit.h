// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "UnitProperties.h"
#include <vector>
#include "Unit.generated.h"

class Action;

UCLASS()
class RESEARCHPROJECT_API AUnit : public ACharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUnit();

	// Called when the game starts or when Actionwned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Team)
	ETeam_Enum teamEnum;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Stats)
	int32 health;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Stats)
	float speed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Stats)
	FResource primaryResource;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Progression)
	int32 exp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Progression)
	int32 level;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser) override;
	std::vector<Action*> getExposedActions();

private:
	std::vector<Action*> exposedActions;
};
