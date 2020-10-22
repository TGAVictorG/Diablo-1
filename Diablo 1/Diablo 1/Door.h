#pragma once
#include "Lock.h"
#include <string>

class Room;

class Door
{
public:
	Door(Room *roomOne, Room *roomTwo, Lock *aLock = nullptr, std::string aDescription = "A plain looking door");
	const std::string ToString();
private:
	Lock* myLock;
	Room* myRoomOne;
	Room* myRoomTwo;

	std::string myDescription;
};

