#pragma once
#include "Command.h"
#include "Console.h"



class TravelCommand : public Command
{
public:
	TravelCommand() {
		this->name = "Travel";
		this->syntax = "travel [Direction]";
		this->description = "Moves the player in specified direction. directions = N, S, W, E";
	}

	void execute(std::string direction) override {
		Console::godMessage("You move");
		Console::godMessage(direction); // there is no way to concat strings in my code yet.
	}



};

