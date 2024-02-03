#pragma once

#include<string>

class Entity
{
public:

	std::string getName() const;
	int getAge() const;
	int getHealth() const;

	void setName(const std::string &name);
	void setAge(int age);
	void setHealth(int health);



protected:

	std::string name;
	int age;
	int health;



};

