#pragma once

#include<string>
#include<vector>


namespace Console
{

    // namespace for general console output commands.

    std::vector<std::string> readInput();

    void godMessage(std::string message);

    void clearConsole();
    void newLine();




};

