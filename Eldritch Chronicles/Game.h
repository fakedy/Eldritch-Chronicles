#pragma once
#include<memory>
#include<vector>
#include <unordered_map>
#include "Room.h"
#include "Command.h"
#include "GameMap.h"

class Game
{
public:
	

	Game();

	~Game();


	void loadGame();
	static void printCommands();
	static std::unordered_map<std::string, std::unique_ptr<Command>> commands;
	
	static std::unique_ptr<GameMap> gameMap;
	static Room* room;

private:
	void update();
	void populateCommands();

};

