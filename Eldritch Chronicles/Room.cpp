#include "Room.h"
#include <memory>




	void Room::read_map(const json& j) {
		j.at("name").get_to(name);
		j.at("description").get_to(description);
		j.at("description").get_to(description);
		n = j["neighbours"].at("n").get<int>();
		s = j["neighbours"].at("s").get<int>();
		w = j["neighbours"].at("w").get<int>();
		e = j["neighbours"].at("e").get<int>();
	}


	Room::Room(int id, const json& location) {
		this->id = id;
		this->content = std::make_unique<Content>();
		read_map(location);
	}


	Room::~Room() {

	}

	const Room::Content& Room::getContent() const { // interesting memory situation to consider
		// a read only function that returns a reference to the content struct
		return *content;
	}


