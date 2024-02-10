#pragma once
#include <vector>
#include <memory>
#include "Room.h"
class GameMap
{

	static void loadMaps(const json& j);
	// store all rooms in memory
private:
	static std::vector<std::unique_ptr<Room>> rooms;
	




};

