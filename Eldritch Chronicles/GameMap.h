#pragma once
#include <memory>
#include <unordered_map>
#include "Room.h"


class GameMap
{
public:
	void loadMaps(const json& j);
	Room* getRoom(int id);


	// store all rooms in memory
	std::unordered_map<int, std::unique_ptr<Room>> rooms;
};

