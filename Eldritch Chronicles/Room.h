#pragma once

#include<vector>
#include<memory>
#include "json.hpp"
#include "Item.h"
#include "Entity.h"

using json = nlohmann::json;

class Room
{
public:
	// A room can be any location in the game where the player is.
	std::string name;
	int id;
	std::string description;

	int n;
	int s;
	int w;
	int e;



	Room(int id, const json& location);
	
	~Room();


private:
	void read_map(const json& j);

	std::vector<std::shared_ptr<Item>> items;
	std::vector<std::shared_ptr<Entity>> Entities;

};

