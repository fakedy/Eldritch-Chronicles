#include "GameMap.h"
#include "json.hpp"


std::unordered_map<int, std::unique_ptr<Room>> GameMap::rooms;

void GameMap::loadMaps(const json& j) {

	int id = 0;



	rooms.emplace(0,std::unique_ptr<Room>());

}