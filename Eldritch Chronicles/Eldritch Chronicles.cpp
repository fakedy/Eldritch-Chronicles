
#include <iostream>
#include "Console.h"


int main()
{
    Console::godMessage("Hello Adventurer!");
    
    Console::godMessage("1 : New Game!");

    Console::godMessage("2 : Load Game!");


    if (Console::readInput() == "1") {
        Console::godMessage("Very well, let your story begin.");
    }

}




