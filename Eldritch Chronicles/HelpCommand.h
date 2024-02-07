#pragma once
#include <vector>
#include "Command.h"
#include "Console.h"
#include "Game.h"
class HelpCommand : public Command
{
public:
	HelpCommand() {
		this->name = "Help";
		this->syntax = "Help ["", command ]";
		this->description = "Prints a list of usable commands or gives more info on a specific command";
	}

	void execute(std::vector<std::string> args) override {

		for (auto& pair : Game::commands) {
			Console::godMessage(pair.second.get()->syntax);
			Console::godMessage(pair.second.get()->description);
			Console::godMessage("-------------------------------------------");
		}
	}
};

