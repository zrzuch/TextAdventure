#include "Enemy.h"
#include <iostream>

/*
-----------Takes in a Enemy Reference-----------
First Number----Second Number-------Third Number
------------------------------------------------
1) Orc			0) Type-Specific	Level
2) Human		1) Warrior			(0-99)
3) Dwarf		2) Rogue
4) Elf			3) Wizard
5) Rat
6) Dragon
------------------------------------------------
*/

Enemy::Enemy(int enemy) {

	health = 10;
	strength = 0;
	dexterity = 0;
	intelligence = 0;
	endurance = 0;

	type = enemy / 1000;
	_class = (enemy / 100) % 10;
	level = enemy % 100;

	generateStatistics();
}

void Enemy::generateStatistics() {
	switch (type) {
	case 1: // Orc
		strength += 1;
		break;
	case 2: // Human
		strength += 1;
		break;
	case 3: // Dwarf
		endurance += 1;
		break;
	case 4: // Elf
		if (_class == 2) {
			dexterity += 1;
		}
		else {
			intelligence += 1;
		}
		break;
	case 5: // Rat
		endurance += 1;
		break;
	case 6: // Dragon
		strength += 3;
		endurance += 3;
		break;
	}
	switch (_class) {
	case 0: // Type Specific
		switch (type) {
		case 5:
			strength += 1;
			break;
		case 6:
			strength += 3;
			endurance += 3;
			break;
		}
		break;
	case 1: // Warrior
		strength += 2;
		endurance += 2;
		break;
	case 2: // Rogue
		dexterity += 3;
		endurance += 1;
		break;
	case 3: // Wizard
		intelligence += 3;
		endurance += 1;
		break;
	}

	for (int i = 0; i < level; i++) {
		switch (_class) {
		case 0: // Type Specific
			switch (type) {
			case 5: // Rat
				strength += 1;
				break;
			case 6: // Dragon
				strength += 3;
				endurance += 3;
				break;
			}
			break;
		case 1: // Warrior
			strength += 2;
			endurance += 2;
			break;
		case 2: // Rogue
			dexterity += 3;
			endurance += 1;
			break;
		case 3: // Wizard
			intelligence += 3;
			endurance += 1;
			break;
		}
	}
}
