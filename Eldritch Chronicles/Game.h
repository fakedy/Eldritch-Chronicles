#pragma once
#include<memory>
#include<vector>
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
	static std::vector<std::unique_ptr<Command>> basicCommands;

	void update();
	void populateCommands();

};

