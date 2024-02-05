#pragma once
#include "Command.h"
#include "Console.h"



class TravelCommand : public Command
{


	void execute(std::string direction) override {
		Console::godMessage("You move");
		Console::godMessage(direction); // there is no way to concat strings in my code yet.
	}



};

