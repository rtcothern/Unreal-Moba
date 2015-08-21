#include "ResearchProject.h"
#include "Goal_Exp.h"
#include "Action_Kill.h"
#include "Constants.h"


Action_Kill::Action_Kill(uint16 expGain, uint16 goldGain) : Action()
{
	this->expGain = expGain;
	this->goldGain = goldGain;
}
Action_Kill::~Action_Kill()
{
}

float Action_Kill::getExpEffect(uint16 expNeededForLevel) {
	float ratio = expGain / expNeededForLevel;
	return ratio;
};
float Action_Kill::getGoldEffect(uint16 currentGold) {
	float ratio = goldGain / currentGold;
	return ratio;
};
//float Action_Kill::getLiveEffect(const Goal* goal) {
//
//};
//float Action_Kill::getPushEffect(const Goal* goal) {
//
//};
