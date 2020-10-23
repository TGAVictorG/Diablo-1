#include "Player.h"

Player::Player(Stats* aStatsPointer) : myStats(aStatsPointer)
{
	myCurrentRoom = nullptr;
}

void Player::SetCurrentRoom(Room* aRoom)
{
	myCurrentRoom = aRoom;
}

Room* Player::GetCurrentRoom()
{
	return myCurrentRoom;
}

Stats& Player::GetStats() const
{
	return *myStats;
}
