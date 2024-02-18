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
private:
	struct Content {
		std::vector<std::unique_ptr<Item>> items;
		std::vector<std::unique_ptr<Entity>> Entities;
	};
public:


	std::string name;
	int id;
	std::string description;
	std::unique_ptr<Content> content;

	int n;
	int s;
	int w;
	int e;



	Room(int id, const json& location);
	
	~Room();


	const Content& getContent() const;




private:
	void read_map(const json& j);
	



};

