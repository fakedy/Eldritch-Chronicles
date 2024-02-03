#pragma once

#include<vector>
#include<memory>

#include "Item.h";
#include "Entity.h"


class Room
{

public:

	Room();
	
	~Room();


private:

	std::vector<std::shared_ptr<Item>> items;
	std::vector<std::shared_ptr<Entity>> Entities;

};

