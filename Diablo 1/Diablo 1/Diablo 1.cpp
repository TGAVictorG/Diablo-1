#include <iostream>
#include "Stats.h"
#include "Player.h"
#include "Enemy.h"
#include "Room.h"
#include "Door.h"
#include "Input.h"

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

		int answer = Utilities::Input::AskForInteger();

		system("pause");
	}
}
