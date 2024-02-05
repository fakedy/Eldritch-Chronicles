#pragma once

#include <iostream>
class Command
{
public:
	// The super class for all commands.
	virtual ~Command() = default;
	virtual void execute(std::string args) = 0;


	std::string name;
	std::string syntax;
	std::string description;


};

