
#include <iostream>

std::string readInput();
void godMessage(std::string message);

int main()
{
    std::cout << "Hello Adventurer!\n";
    
    std::cout << "1 : New Game!\n";

    std::cout << "1 : Load Game\n";


    if (readInput() == "1") {
        godMessage("Very well, let your story begin.");
    }




}


std::string readInput() {

    std::string answer;
    std::cin >> answer;

    return answer;
}

void godMessage(std::string message) {

    std::cout << message << std::endl;

}

