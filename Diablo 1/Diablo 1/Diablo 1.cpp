#include <iostream>
#include "Stats.h"
#include "Player.h"
#include "Enemy.h"
#include "Room.h"
#include "Door.h"
#include "Input.h"

void PrintMenuChoices();
Room* OpenDoorMenu(Room* aRoom, const Stats& aStats);

enum class RoomAction
{
	OpenDoor = 0,
};

int main()
{
	Stats playerStats(5, 5, 5);
	Player player(&playerStats);

	Room room1("Room numero uno");
	Room room2("Second room");

	Door door1(&room1, &room2, &Lock::Lock(4, 6));

	player.SetCurrentRoom(&room1);

	bool isPlaying = true;
	while (isPlaying)
	{
		Room* currentRoom = player.GetCurrentRoom();

		std::cout << currentRoom->GetRoomDescription() << std::endl;
		std::cout << std::endl;

		std::cout << "What do you want to do?" << std::endl;
		PrintMenuChoices();
		std::cout << '\n' << std::endl;

		RoomAction answer = static_cast<RoomAction>(Utilities::Input::AskForInteger(0, 0));

		switch (answer)
		{
		case RoomAction::OpenDoor:
			currentRoom = OpenDoorMenu(currentRoom, player.GetStats());
			break;
		}

		system("pause");
	}
}

void PrintMenuChoices()
{
	std::cout << "0 - Open a door";
}

Room* OpenDoorMenu(Room* aRoom, const Stats& aStats)
{
	std::vector<Door*> doors = aRoom->GetRoomDoors();

	std::cout << "Which door do you want to open?" << std::endl;

	for (size_t i = 0; i < doors.size(); i++)
	{
		std::cout << i << " - " << doors[i]->ToString() << std::endl;
	}

	int answer = Utilities::Input::AskForInteger(0, doors.size());

	return doors[answer]->TryOpenDoor(aRoom, aStats);
}
