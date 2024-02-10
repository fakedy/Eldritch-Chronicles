#pragma once
#include "Command.h"
#include "Console.h"
#include <cctype>

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
			Console::godMessage("You travel " + args[1]);
			travel(args[1]);
		}
		else {
			Console::godMessage("Invalid Arguments");
		}
	}

private:


	void travel(std::string direction) const {

		// make direction lowercase
		std::string dir;
		for (char c : direction) {
			dir += std::tolower(c);
		}

		// 0 is an invalid direction
		if (dir == "n" && Game::room->n != 0) {
			Game::room = Game::gameMap.get()->getRoom(Game::room->n);
		}
		else if (dir == "s" && Game::room->s != 0) {
			Game::room = Game::gameMap.get()->getRoom(Game::room->s);
		}
		else if (dir == "w" && Game::room->w != 0) {
			Game::room = Game::gameMap.get()->getRoom(Game::room->w);
		}
		else if (dir == "e" && Game::room->e != 0) {
			Game::room = Game::gameMap.get()->getRoom(Game::room->e);
		}
		else {
			Console::godMessage("Invalid Direction");
		}

	}

};

