#include "Entity.h"


std::string Entity::getName() const {

	return this->name;
}

int Entity::getAge() const {

	return this->age;
}

int Entity::getHealth() const {

	return this->health;
}


void Entity::setName(const std::string &name) {
	this->name = name;
}

void Entity::setAge(int age) {

	this->age = age;
}

void Entity::setHealth(int health) {

	this->health = health;
}