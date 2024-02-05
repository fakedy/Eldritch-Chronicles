#pragma once

#include<vector>
#include<memory>

#include "Item.h"
#include "Entity.h"


class Room
{
public:
	// A room can be any location in the game where the player is.

	Room();
	
	~Room();


private:

	std::vector<std::shared_ptr<Item>> items;
	std::vector<std::shared_ptr<Entity>> Entities;

};

