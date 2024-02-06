#include <memory>
#include <vector>

#include "Console.h"
#include "Game.h"

void newGame();
void loadGame();


std::unique_ptr<Game> game;

int main()
{
    while (true) {

        Console::godMessage("Hello Adventurer!");

        Console::godMessage("1 : New Game!");

        Console::godMessage("2 : Load Game!");


        std::vector<std::string> answer = Console::readInput();
        
        // TODO make sure to handle args...
        if (answer.front() == "1") {
            newGame();
        }
        else if (answer.front() == "2") {
            loadGame();
        }
        else {
            Console::godMessage("Invalid Input");
        }

    }
}



void newGame() {
    Console::godMessage("Very well, let your story begin.");
    game = std::make_unique<Game>();
}

void loadGame() {
    Console::godMessage("Loading save");
    game = std::make_unique<Game>();
}



