// Code copyright © Raymond Cothern, 2015

#pragma once
#include "Goal.h"
/**
 * 
 */
class RESEARCHPROJECT_API Goal_Exp : public Goal
{
public:
	Goal_Exp(uint16 expNeededForLevel);
	~Goal_Exp();
	void applyAction(Action * action);
	void update(AUnit* character);

protected:
	uint16 expNeededForLevel;
};
