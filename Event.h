#include "Enemy.h"

#ifndef EVENT_H
#define EVENT_H

class Event {
public:
	Event();
	Event(int numOfMonsters);
	void start();
	void visit();
private:
	Enemy *monster[];
};

#endif