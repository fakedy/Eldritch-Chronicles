#pragma once
#include<memory>
#include<vector>
#include <unordered_map>
#include "Room.h"
#include "Command.h"

class Game
{
public:
	

	Game();

	~Game();


	void loadGame();
	static void printCommands();
	static std::unordered_map<std::string, std::unique_ptr<Command>> commands;
	

private:
	std::unique_ptr<Room> room;

	void update();
	void populateCommands();

};

