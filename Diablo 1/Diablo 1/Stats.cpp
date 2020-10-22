#include "Stats.h"

Stats::Stats(int anStrValue, int aDexValue, int aConValue) : myStr(anStrValue), myDex(aDexValue), myCon(aConValue)
{
    myAttack = myStr * myDex;
    myMaxHealth = (myCon * 4) + (myStr * 3) + myDex;
    myCarryCap = (myStr * myCon) / 2;
    myDefense = myStr + myDex + (myCon / 2);

    myCurrentHealth = myMaxHealth;
}

const int Stats::GetDex()
{
    return myDex;
}

const int Stats::GetStr()
{
    return myStr;
}

const int Stats::GetCon()
{
    return myCon;
}

const int Stats::GetAttack()
{
    return myAttack;
}

const int Stats::GetMaxHealth()
{
    return myMaxHealth;
}

const int Stats::GetCurrentHealth()
{
    return myCurrentHealth;
}

const int Stats::GetCarryCap()
{
    return myCarryCap;
}

const int Stats::GetDefense()
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
