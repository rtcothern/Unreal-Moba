// Code copyright © Raymond Cothern, 2015

#include "ResearchProject.h"
#include "Action.h"
#include "Goal_Exp.h"
#include "../Entities/Unit.h"

Goal_Exp::Goal_Exp(uint16 expNeededForLevel) : Goal()
{
	this->expNeededForLevel = expNeededForLevel;
	insistence = 5;
	changePerMinute = 1;
}

Goal_Exp::~Goal_Exp()
{
}

void Goal_Exp::applyAction(Action * action){
	float directChange = action->getExpEffect(expNeededForLevel) * maxInsistence;
	insistence += directChange;
	Goal::applyAction(action);
}
void Goal_Exp::update(AUnit* character){
	expNeededForLevel = ((FParagonProgression*)character->progression)->getExpForNextLevel();
}
