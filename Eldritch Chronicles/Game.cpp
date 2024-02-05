
#include "Game.h"
#include "Console.h"
#include "travelCommand.h"


std::vector<std::unique_ptr<Command>> Game::basicCommands;

Game::Game() {

	room = std::unique_ptr<Room>();

	
	populateCommands();


	while (true) {
		update();
	}
}

Game::~Game() {

}


void Game::loadGame() {

}


void Game::update() {

	Console::godMessage("");
	Console::godMessage("What would you like to do?");
	std::string answer = Console::readInput();
	// temp doing stuff like this
	if (answer == "commands") {

		printCommands();

	}
	else {
		Console::godMessage("invalid command");
	}

}

void Game::printCommands() {	// lets the player see the available commands.

	for (int i = 0; i < basicCommands.size(); i++) {
		basicCommands[i].get()->name;
	}

}

void Game::populateCommands() {
	// TODO: implement constructor to populate commands.
	basicCommands.push_back(std::make_unique<TravelCommand>());
}