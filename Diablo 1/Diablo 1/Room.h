#pragma once
#include "Door.h"
#include <String>
#include <vector>

class Door;

class Room
{
public:
	static void AddDoorToRooms(Room* firstRoom, Room* secondRoom, Door* aDoor);

	Room(std::string aRoomDescription);
	const std::string GetRoomDescription();
private:
	std::vector<Door*> myDoors;
	std::string myRoomDescription;
};

