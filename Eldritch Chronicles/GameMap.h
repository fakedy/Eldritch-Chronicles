#pragma once
#include <memory>
#include <unordered_map>
#include "Room.h"


class GameMap
{

	static void loadMaps(const json& j);
	// store all rooms in memory
private:
	static std::unordered_map<int, std::unique_ptr<Room>> rooms;
	




};

