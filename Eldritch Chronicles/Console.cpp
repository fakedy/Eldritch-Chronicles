#include "Console.h"
#include <iostream>



std::string Console::readInput() {

    std::string answer;
    std::cin >> answer;

    return answer;
}

void Console::godMessage(std::string message) { // This is the general console write command

    std::cout << message << std::endl;

}