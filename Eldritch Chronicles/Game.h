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

	

private:
	std::unique_ptr<Room> room;
	static std::unordered_map<std::string, std::unique_ptr<Command>> commands;

	void update();
	void populateCommands();

};

