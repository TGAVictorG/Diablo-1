#include "Lock.h"

Lock::Lock(int aStrRequirement, int aDexRequirement) : myStrRequirement(aStrRequirement), myDexRequirement(aDexRequirement)
{
	myLockedState = true;
}

bool Lock::TryToBreakOpen(int aStrValue)
{
	if (aStrValue > myStrRequirement)
	{
		myLockedState = false;
		return true;
	}

	return false;
}

bool Lock::TryToPickLock(int aDexValue)
{
	if (aDexValue > myDexRequirement)
	{
		myLockedState = false;
		return true;
	}

	return false;
}

const int Lock::GetStrRequirement()
{
	return myStrRequirement;
}

const int Lock::GetDexRequirement()
{
	return myDexRequirement;
}

const bool Lock::GetIsLocked()
{
	return false;
}
