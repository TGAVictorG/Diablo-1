#pragma once
#include "Door.h"
#include "Enemy.h"
#include <String>
#include <vector>

class Door;

class Room
{
public:
	static void AddDoorToRooms(Room *firstRoom, Room *secondRoom, Door *aDoor);

	Room(std::string aRoomDescription);
	const std::string GetRoomDescription();
	const std::vector<Door*>& GetRoomDoors();
private:
	std::vector<Door*> myDoors;
	std::vector<Enemy*> myEnemies;
	//std::vector<Item*> myItems;
	std::string myRoomDescription;
};

