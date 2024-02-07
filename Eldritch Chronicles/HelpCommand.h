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

	void execute(std::vector<std::string> args) override {	// args actually contain the original command
		if (args.size() > 2) {
			Console::godMessage("Invalid Arguments");
		}

		if (args.size() == 1) {
			for (auto& pair : Game::commands) {
				Console::godMessage(pair.second.get()->syntax);
				Console::godMessage(pair.second.get()->description);
				Console::godMessage("-------------------------------------------");
			}
		}
		
		if (args.size() == 2) {
			if (Game::commands.find(args[1]) != Game::commands.end()) { // check if the command exists
				Console::godMessage(Game::commands.at(args[1]).get()->syntax);
				Console::godMessage(Game::commands.at(args[1]).get()->description);
				Console::godMessage("-------------------------------------------");
			}
		}
	}
};

