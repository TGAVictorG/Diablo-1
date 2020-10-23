#pragma once
#include "Lock.h"
#include "Stats.h"
#include <string>

class Room;

enum class DoorOpenOption
{
	BreakDown = 0,
	PickLock = 1,
};

class Door
{
public:
	Door(Room *roomOne, Room *roomTwo, Lock *aLock = nullptr, const std::string aDescription = "A plain looking door");
	Room* TryOpenDoor(const Room* aCurrentRoom, const Stats& aStats);
	Room* MoveToRoom(const Room* aCurrentRoom);
	const std::string ToString();
private:
	Lock* myLock;
	Room* myRoomOne;
	Room* myRoomTwo;

	std::string myDescription;
};

