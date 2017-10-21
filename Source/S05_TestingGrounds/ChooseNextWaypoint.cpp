// Fill out your copyright notice in the Description page of Project Settings.

#include "S05_TestingGrounds.h"
#include "ChooseNextWaypoint.h"
#include "BehaviorTree/BlackboardComponent.h"


EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Expose Key Component from blackboard in behavior tree (see UPROPERTY category blackboard in .h)
	auto BlackboardComp = OwnerComp.GetBlackboardComponent();
	//Get the actual name of the key of the blackboard key selector
	auto Index = BlackboardComp->GetValueAsInt(IndexKey.SelectedKeyName);
	UE_LOG(LogTemp, Warning, TEXT("Waypoint index : %i"), Index);
	return EBTNodeResult::Succeeded;
}

