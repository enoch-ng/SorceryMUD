// Player struct and PlayerList class for SorceryMUD

#ifndef PLAYERLIST_H
#define PLAYERLIST_H

#include <vector>
#include <string>

struct Player {
	std::string userid;
	int state;
};

class PlayerList {
	private:
		// I'm not really sure whether this would be best suited as a vector, a hash map, a list, or something else. That's why I decided to make this a separate class, so if I change things in the future it'll all be encapsulated here.
		// It will probably be easier to decide how I want to store the playerlist when I know exactly what information I need to store. If it's just the player ID and the state, a hash map is great. In that case, I won't even need a Player struct.
		std::vector<Player> players;

	public:
		PlayerList() { }
		//~PlayerList();

		void add(std::string, int);
		void remove(std::string);

		int playerstate(std::string);
		int setplayerstate(std::string, int);
};

#endif
