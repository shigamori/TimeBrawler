// Fill out your copyright notice in the Description page of Project Settings.

#include "TimeBrawler.h"
#include "TimeBubble.h"


// Sets default values
ATimeBubble::ATimeBubble()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATimeBubble::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATimeBubble::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

