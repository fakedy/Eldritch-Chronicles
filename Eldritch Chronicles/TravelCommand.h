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

	void execute(std::vector<std::string> args) override {	// args actually contain the original command
		if (args.size() == 2) {
			if (validDirection(args[1])) {
				Console::godMessage("You travel " + args[1]);
			}
			else {
				Console::godMessage("Invalid Direction");
			}
		}
		else {
			Console::godMessage("Invalid Arguments");
		}
	}

private:

	bool validDirection(std::string direction) const {
		// TODO: Link with game's current room information
		return true;
	}

};

