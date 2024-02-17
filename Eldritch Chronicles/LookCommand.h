#pragma once
#include "Command.h"
#include "Console.h"
#include <cctype>

class LookCommand : public Command
{
public:
	LookCommand() {
		this->name = "Look";
		this->syntax = "Look ["", Direction ]";
		this->description = "Look around you or at a certain direction";
	}

	void execute(std::vector<std::string> &args) override {	// args[] is original command
		if (args.size() == 1) {
			look();
		}
		else if (args.size() == 2) {
			look(args[1]);
		}
		else {
			Console::godMessage("Invalid Arguments");
		}
	}

private:

	void look() const {
		//TODO implement surroundings check
	}

	void look(std::string &direction) const {

		// make direction lowercase
		std::string dir;
		for (char c : direction) {
			dir += std::tolower(c);
		}

		std::string msg = "You see: ";

		// 0 is an invalid direction
		if (dir == "n" && Game::room->n != 0) {
			Console::godMessage(msg + Game::gameMap.get()->getRoom(Game::room->n)->name);
		}
		else if (dir == "s" && Game::room->s != 0) {
			Console::godMessage(msg + Game::gameMap.get()->getRoom(Game::room->s)->name);
		}
		else if (dir == "w" && Game::room->w != 0) {
			Console::godMessage(msg +Game::gameMap.get()->getRoom(Game::room->w)->name);
		}
		else if (dir == "e" && Game::room->e != 0) {
			Console::godMessage(msg + Game::gameMap.get()->getRoom(Game::room->e)->name);
		}
		else {
			Console::godMessage("Invalid Direction");
		}
	}
};

