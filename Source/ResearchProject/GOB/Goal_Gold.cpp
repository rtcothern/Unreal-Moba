// Code copyright © Raymond Cothern, 2015

#include "ResearchProject.h"
#include "Action.h"
#include "Goal_Gold.h"
#include "../Entities/Unit.h"

Goal_Gold::Goal_Gold(uint16 currentGold) : Goal()
{
	this->currentGold = currentGold;
	insistence = 5;
	changePerMinute = 1.5;
}

Goal_Gold::~Goal_Gold()
{
}

void Goal_Gold::applyAction(Action* action){
	float directChange = action->getGoldEffect(currentGold) * maxInsistence;
	insistence += directChange;
	Goal::applyAction(action);
}

void Goal_Gold::update(AUnit* character){
	currentGold = ((FParagonProgression*)character->progression)->gold;
}