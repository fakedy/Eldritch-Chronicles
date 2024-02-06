
#include "Game.h"
#include "Console.h"
#include "TravelCommand.h"
#include "HelpCommand.h"


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
	std::vector<std::string> answer = Console::readInput();

	if (commands.find(answer.front()) != commands.end()) { // check if the command exists
		commands.at(answer.front()).get()->execute("");  // execute command + args
	}
	else {
		Console::godMessage("invalid command");
	}
		
}

void Game::populateCommands() { // might want to move this to separate class in order to not have 2000 imports and stuff
	commands.emplace("travel", std::make_unique<TravelCommand>());
	commands.emplace("help", std::make_unique<HelpCommand>());
}			