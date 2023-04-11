// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once
#include "DelegateDeclarations.h"

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "KillAddedInvokerInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UKillAddedInvokerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FISHSHOOTER_API IKillAddedInvokerInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//virtual FKillAddedEvent& GetKillAddedEvent() PURE_VIRTUAL(IKillAddedInvokerInterface::GetKillAddedEvent, return *(FKillAddedEvent*)nullptr;);
};
