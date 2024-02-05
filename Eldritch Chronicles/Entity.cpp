#include "Entity.h"


std::string Entity::getName() const {

	return this->name;
}




void Entity::setName(const std::string &name) {
	this->name = name;
}
