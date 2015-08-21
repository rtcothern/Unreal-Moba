// Code copyright © Raymond Cothern, 2015

#pragma once
#include "Goal.h"
/**
 * 
 */
class RESEARCHPROJECT_API Goal_Gold : public Goal
{
public:
	Goal_Gold(uint16 currentGold);
	~Goal_Gold();
	void applyAction(Action* action);
	void update(AUnit* character);
private:
	uint16 currentGold;
};
