#pragma once
#include<memory>
#include "Room.h"

class Game
{
public:
	

	Game();

	~Game();


	void loadGame();

	

private:
	std::unique_ptr<Room> room;

	void update();

};

