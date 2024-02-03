#pragma once

#include<vector>
#include<memory>

#include "Item.h";
#include "Entity.h"


class Room
{

public:

	Room() {

	}
	
	~Room() {

	}


private:

	std::vector<Item> items;
	std::vector<Entity> Entities;

};

