#include <iostream>
#include "Location.h"

Location::Location(Event* newStartEvent, Event* newVisitEvent) {
	north = NULL;
	south = NULL;
	west = NULL;
	east = NULL;

	startEvent = newStartEvent;
	visitEvent = newVisitEvent;

	isBase = false;
	isStart = false;
}

Location::Location(Event* newStartEvent, Event* newVisitEvent, bool newBase, bool newStart) {
	north = NULL;
	south = NULL;
	west = NULL;
	east = NULL;

	startEvent = newStartEvent;
	visitEvent = newVisitEvent;

	isBase = newBase;
	isStart = newStart;
}
/*
void Location::start(){
	if (isStart) {
		startEvent.start();
	}
}

void Location::visit(){
	visitEvent.visit();
}*/
Location* Location::getNorth() {
	return north;
}

Location* Location::getSouth() {
	return south;
}

Location* Location::getWest() {
	return west;
}

Location* Location::getEast() {
	return east;
}

void Location::setNorth(Location* newNorth) {
	north = newNorth;
}

void Location::setSouth(Location* newSouth) {
	south = newSouth;
}

void Location::setWest(Location* newWest) {
	west = newWest;
}

void Location::setEast(Location* newEast) {
	east = newEast;
}
