#pragma once
#include "Stats.h"
#include "Room.h"

class Player
{
public:
	Player(Stats* aStatsPointer);

	void SetCurrentRoom(Room* aRoom);
	Room* GetCurrentRoom();
	Stats& GetStats() const;
private:
	Stats* myStats;
	Room* myCurrentRoom;
};
