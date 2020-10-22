#include "Door.h"
#include "Room.h"

Door::Door(Room* roomOne, Room* roomTwo, Lock* aLock, std::string aDescription) : myRoomOne(roomOne), myRoomTwo(roomTwo), myLock(aLock), myDescription(aDescription)
{
	Room::AddDoorToRooms(roomOne, roomTwo, this);
}

const std::string Door::ToString()
{
	return myDescription;
}
