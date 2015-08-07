// Code copyright © Raymond Cothern, 2015

#include "ResearchProject.h"
#include "AutomationTest.h"
#include "../../GOB/Goal.h"
#include "../../GOB/Action.h"
#include "../../GOB/WorldModel.h"
#include "../../GOB/ActionPlanner.h"

using namespace std;

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FActionPlannerTest, "AIUnitTests", EAutomationTestFlags::ATF_SmokeTest)

bool FActionPlannerTest::RunTest(const FString& Parameters)
{
	vector<Goal> testGoals;
	vector<Action> testActions;
	testGoals.push_back(Goal(TEXT("Heal"), 4));
	testGoals.push_back(Goal(TEXT("Kill-Ogre"), 3));
	testActions.push_back(Action(TEXT("Fireball"), 0, 3));
	testActions.push_back(Action(TEXT("Lesser-Heal"), 0, 2));
	testActions.push_back(Action(TEXT("Greater-Heal"), 0, 3));
	testActions[0].addGoalEffect(testGoals[1].getId(), -2);
	testActions[1].addGoalEffect(testGoals[0].getId(), -2);
	testActions[2].addGoalEffect(testGoals[0].getId(), -4);

	FResource testResource;
	testResource.amount = 5;
	testResource.maxAmount = 5;
	testResource.regenRate = 0;
	WorldModel world(testActions, testGoals, testResource);
	ActionPlanner planner;
	Action a = planner.planAction(world, 2);
	world.applyAction(&a); 
	Action a2 = planner.planAction(world, 1);

	
	/*AddError(FString::Printf(TEXT("The testing goat asdfasdfasdfding! ")));*/

	return true;
}