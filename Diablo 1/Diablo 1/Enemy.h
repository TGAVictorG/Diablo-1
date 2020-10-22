#pragma once
#include "Stats.h"

class Enemy
{
public:
	Enemy(Stats* aStatsPointer);
private:
	Stats* myStats;
};

