//	All GAS and no brakes @ Play by Play 2021
//
//  File Name   :   AGBaseAttributeSet.cpp
//  Description :   Base attriubute set for characters in All GAS and no brakes
//

#pragma once

// Library Includes
#include "AttributeSet.h"

// Local Includes

// This Includes
#include "AGBaseAttributeSet.generated.h"

// Types

// Constants

// Prototypes
UCLASS()
class UAGBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	/** Set default values. For example, Health should be set to a positive number */
	UAGBaseAttributeSet();

	/** This measures how much damage can be absorbed before dying. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData Health;
};
