
#include "Game.h"
#include "Console.h"
#include "TravelCommand.h"
#include "HelpCommand.h"
#include "GameMap.h"
#include <iostream>
#include <fstream>


std::unordered_map<std::string, std::unique_ptr<Command>> Game::commands;
std::unique_ptr<GameMap> Game::gameMap;
Room* Game::room;

using json = nlohmann::json;

Game::Game() {

	// TEMPORARY
	std::ifstream file("maps/season_valley.json");
	json j = json::parse(file);
	// TEMPORARY

	gameMap = std::make_unique<GameMap>();
	gameMap.get()->loadMaps(j);
	room = gameMap.get()->getRoom(1);
	
	

	
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

	Console::clearConsole();
	Console::godMessage("You are in " + room->name);
	Console::godMessage("What would you like to do?");
	Console::newLine();
	std::vector<std::string> answer = Console::readInput();
	Console::newLine();

	if (commands.find(answer.front()) != commands.end()) { // check if the command exists

		commands.at(answer.front()).get()->execute(answer);  // execute command + args
	}
	else {
		Console::godMessage("invalid command");
	}
		
}

void Game::populateCommands() { // might want to move this to separate class in order to not have 2000 imports in the game class.
	commands.emplace("help", std::make_unique<HelpCommand>());
	commands.emplace("travel", std::make_unique<TravelCommand>());
}			