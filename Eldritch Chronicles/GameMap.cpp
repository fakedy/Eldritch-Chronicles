#include "GameMap.h"


void GameMap::loadMaps(const json& j) {
	j.at("id").get_to(id);
	j.at("name").get_to(name);
	j.at("description").get_to(description);
}