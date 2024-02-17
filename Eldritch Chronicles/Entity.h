#pragma once
#include <memory>
#include <vector>
#include<string>

#include "Item.h"

class Entity
{
public:

	// An entity is representing a living thing (or dead, who knows)

	std::string getName() const;
	void setName(const std::string &name);




protected:

	enum Alignment
	{
		Good,
		Neutral,
		Evil
	};

	std::string name;
	std::vector<Item> inventory;

	Alignment alignment;
	bool alive;
	int age;
	int health;
	int stamina;
	int strength;
	int agility;
	int intellect;
};

