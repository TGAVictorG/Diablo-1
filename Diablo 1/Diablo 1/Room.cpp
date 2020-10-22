#include "Room.h"
#include <iostream>

void Room::AddDoorToRooms(Room *firstRoom, Room *secondRoom, Door* aDoor)
{
	firstRoom->myDoors.push_back(aDoor);
	secondRoom->myDoors.push_back(aDoor);
}

Room::Room(std::string aRoomDescription) : myRoomDescription(aRoomDescription)
{
	myDoors = std::vector<Door*>();
}

const std::string Room::GetRoomDescription()
{
	return myRoomDescription;
}
