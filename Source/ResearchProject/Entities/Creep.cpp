// Code copyright © Raymond Cothern, 2015

#include "ResearchProject.h"
#include "Creep.h"

ACreep::ACreep(){

}
void ACreep::BeginPlay(){
	progression = new FCreepProgression();
	Super::BeginPlay();
}

