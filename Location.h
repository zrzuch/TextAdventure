#include "Event.h"

#ifndef LOCATION_H
#define LOCATION_H

class Location {
public:
	Location(Event* newStartEvent, Event* newVisitEvent);
	Location(Event* newEvent, Event* newVisitEvent, bool newBase, bool newStart);
	
	void start();
	void visit();

	Location *getNorth();
	Location *getSouth();
	Location *getWest();
	Location *getEast();

	void setNorth(Location* newNorth);
	void setSouth(Location* newSouth);
	void setWest(Location* newWest);
	void setEast(Location* newEast);
private:
	Location *north;
	Location *south;
	Location *west;
	Location *east;

	Event *startEvent;
	Event *visitEvent;

	bool isBase;
	bool isStart;
};

#endif