#pragma once
#include "Command.h"
#include "Console.h"
class HelpCommand : public Command
{
public:
	HelpCommand() {
		this->name = "Help";
		this->syntax = "Help ["", command ]";
		this->description = "Prints a list of usable commands or gives more info on a specific command";
	}

	void execute(std::string direction) override {
		Console::godMessage("You move");
		Console::godMessage(direction); // there is no way to concat strings in my code yet.
	}
};

