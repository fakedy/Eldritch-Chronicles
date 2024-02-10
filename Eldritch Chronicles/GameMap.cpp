#include "GameMap.h"
#include "json.hpp"


void GameMap::loadMaps(const json& j) {


	for (const auto& location : j["locations"]) {
		int id = location.at("id").get<int>();
		rooms.emplace(id, std::make_unique<Room>(id));
	}

}