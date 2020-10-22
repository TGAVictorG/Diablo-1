#pragma once
class Lock
{
public:
	Lock(int aStrRequirement, int aDexRequirement);
	bool TryToBreakOpen(int aStrValue);
	bool TryToPickLock(int aDexValue);

	const int GetStrRequirement();
	const int GetDexRequirement();
	const bool GetIsLocked();
private:
	bool myLockedState;
	int myStrRequirement;
	int myDexRequirement;
};

