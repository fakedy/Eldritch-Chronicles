#include "Console.h"
#include <iostream>
#include <vector>




std::vector<std::string> argParse(std::string string);


std::vector<std::string> Console::readInput() {

    std::string answer;
    std::getline(std::cin, answer);

    return argParse(answer);
}

void Console::godMessage(std::string message) { // This is the general console write command

    std::cout << message << std::endl;

}

void Console::clearConsole() {
    // TODO
    // Temp thing below
    std::cout << "" << std::endl;
}

void Console::newLine() {
    std::cout << "" << std::endl;
}



std::vector<std::string> argParse(std::string string) {
    std::vector<std::string> result;

    int lastSpace = 0;
    for (int i = 0; i <= string.length(); i++) {
        if (i == string.length() || string[i] == ' ') { // check if we are at space
            result.push_back(string.substr(lastSpace, i - lastSpace)); // insert the substring from lastSpace to space location
            lastSpace = i+1;
        }
    }

    return result;
}