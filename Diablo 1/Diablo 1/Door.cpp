#include "Door.h"
#include "Room.h"
#include "Input.h"
#include <iostream>

Door::Door(Room* roomOne, Room* roomTwo, Lock* aLock, const std::string aDescription) : myRoomOne(roomOne), myRoomTwo(roomTwo), myLock(aLock), myDescription(aDescription)
{
	Room::AddDoorToRooms(roomOne, roomTwo, this);
}

Room* Door::TryOpenDoor(const Room* aCurrentRoom, const Stats& aStats)
{
	if (myLock == nullptr || !myLock->GetIsLocked())
	{
		return MoveToRoom(aCurrentRoom);
	}
	else
	{
		//try to unlock
		std::cout << "The door is locked!" << std::endl;
		std::cout << "What do you want to do?" << std::endl;

		std::cout << "0 - Break the door down" << std::endl;
		std::cout << "1 - Pick the lock" << std::endl;
		DoorOpenOption answer = static_cast<DoorOpenOption>(Utilities::Input::AskForInteger(0, 1));

		switch (answer)
		{
		case DoorOpenOption::BreakDown:
			myLock->TryToBreakOpen(aStats.GetStr());
			break;
		case DoorOpenOption::PickLock:
			myLock->TryToPickLock(aStats.GetDex());
		}

		if (myLock->GetIsLocked())
		{
			std::cout << "You failed to open the door!" << std::endl;
			return aCurrentRoom == myRoomOne ? myRoomOne : myRoomTwo;
		}
		else
		{
			std::cout << "You opened the door!" << std::endl;
			return MoveToRoom(aCurrentRoom);
		}
	}

}

Room* Door::MoveToRoom(const Room* aCurrentRoom)
{
	return aCurrentRoom == myRoomOne ? myRoomTwo : myRoomOne;
}

const std::string Door::ToString()
{
	return myDescription;
}
