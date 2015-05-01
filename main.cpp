#include <iostream>
#include "Character.h"

int raceQuery();
int classQuery();

void main() {
	Character player;
	player.raceQuery();
	player.classQuery();
	player.print();
	system("PAUSE");
}



