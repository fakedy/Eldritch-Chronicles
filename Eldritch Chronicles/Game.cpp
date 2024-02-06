
#include "Game.h"
#include "Console.h"
#include "travelCommand.h"


std::unordered_map<std::string, std::unique_ptr<Command>> Game::commands;
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
	if (answer == "help") {

		printCommands();

	}
	if (commands.find(answer) != commands.end()) {
		commands.at(answer).get()->execute("");
	}
	else {
		Console::godMessage("invalid command");
	}
		
}

void Game::printCommands() {

	for ( auto &pair : commands) {
		Console::godMessage(pair.second.get()->name);
		Console::godMessage(pair.second.get()->syntax);
		Console::godMessage(pair.second.get()->description);
		Console::godMessage("");
	}
}

void Game::populateCommands() {
	commands.emplace("travel", std::make_unique<TravelCommand>());
}			