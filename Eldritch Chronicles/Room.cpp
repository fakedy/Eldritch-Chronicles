#include "Room.h"




	void Room::read_map(const json& j) {
		j.at("id").get_to(id);
		j.at("name").get_to(name);
		j.at("description").get_to(description);
	}


	Room::Room(int id) {

		
		
	}

	Room::~Room() {

	}

