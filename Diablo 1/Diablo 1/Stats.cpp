#include "Stats.h"

Stats::Stats(int aStrValue, int aDexValue, int aConValue) : myStr(aStrValue), myDex(aDexValue), myCon(aConValue)
{
	myAttack = myStr * myDex;
	myMaxHealth = (myCon * 4) + (myStr * 3) + myDex;
	myCarryCap = (myStr * myCon) / 2;
	myDefense = myStr + myDex + (myCon / 2);

	myCurrentHealth = myMaxHealth;
}

int Stats::GetDex() const
{
	return myDex;
}

int Stats::GetStr() const
{
	return myStr;
}

int Stats::GetCon() const
{
	return myCon;
}

int Stats::GetAttack() const
{
	return myAttack;
}

int Stats::GetMaxHealth() const
{
	return myMaxHealth;
}

int Stats::GetCurrentHealth() const
{
	return myCurrentHealth;
}

int Stats::GetCarryCap() const
{
	return myCarryCap;
}

int Stats::GetDefense() const
{
	return myDefense;
}

void Stats::DoDamage(int aDamageValue)
{
	myCurrentHealth -= aDamageValue;

	if (myCurrentHealth < 0)
	{
		myCurrentHealth = 0;
	}
}
