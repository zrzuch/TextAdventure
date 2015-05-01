#include <iostream>
#include "Character.h"

// Statistics (Max out at 10)

/*
--Class--
1) Warrior	2) Rogue	3) Wizard
---------
--Race---
1) Dwarf (Resistant)	2) Elf (Magical)	3) Human (Strong)
---------
*/

	Character::Character() {
		reset();
	}

	void Character::calculateStats() {
		
		if (isEmpty()) {
			switch (_class) {
			case 1:
				strength += 1;
				break;
			case 2:
				dexterity += 1;
				break;
			case 3:
				intelligence += 1;
				break;
			default:
				std::cout << "Class Not Selected" << std::endl;
			}

			switch (race) {
			case 1:
				endurance += 1;
				break;
			case 2:
				intelligence += 1;
				break;
			case 3:
				strength += 1;
				break;
			default:
				std::cout << "Race Not Selected" << std::endl;
			}
		}

		if (level > 1) {

			switch (_class) {
			case 1:
				strength += 2;
				endurance += 2;
				break;
			case 2:
				dexterity += 3;
				endurance += 1;
				break;
			case 3:
				intelligence += 3;
				endurance += 1;
				break;
			}

			health += endurance * 2;
		}
	}

	void Character::levelUp() {
		level++;
		calculateStats();
	}

	void Character::reset() {
		race = 0;
		_class = 0;
		
		level = 0;
		health = 10;

		strength = 0;
		dexterity = 0;
		intelligence = 0;
		endurance = 0;
	}

	bool Character::isEmpty() {
		return (strength == 0 && dexterity == 0 && intelligence == 0 && endurance == 0);
	}

	int Character::getClass() {
		return _class;
	}

	int Character::getRace() {
		return race;
	}

	void Character::setRace(int newRace) {
		race = newRace;
	}

	void Character::setClass(int newClass) {
		_class = newClass;
	}

	void Character::print() {
		std::cout << "Race = ";
		switch (race) {
		case 1:
			std::cout << "Dwarf" << std::endl;
			break;
		case 2:
			std::cout << "Elf" << std::endl;
			break;
		case 3:
			std::cout << "Human" << std::endl;
			break;
		}

		std::cout << "" << std::endl;

		std::cout << "Class = ";
		switch (_class) {
		case 1:
			std::cout << "Warrior" << std::endl;
			break;
		case 2:
			std::cout << "Rogue" << std::endl;
			break;
		case 3:
			std::cout << "Wizard" << std::endl;
			break;
		}

		std::cout << "" << std::endl;

		std::cout << "----STATISTICS----" << std::endl;
		std::cout << "Dexterity = " << dexterity << std::endl;
		std::cout << "Endurance = " << endurance << std::endl;
		std::cout << "Intelligence = " << intelligence << std::endl;
		std::cout << "Strength = " << strength << std::endl;
		std::cout << "Health = " << health << std::endl;
		std::cout << "------------------" << std::endl;
		std::cout << "" << std::endl;
	}

	void Character::classQuery() {
		int c = 0;
		while (c < 1 || c > 3) {
			std::cout << "Choose a Class" << std::endl;
			std::cout << "1) Warrior" << std::endl;
			std::cout << "2) Rogue" << std::endl;
			std::cout << "3) Wizard" << std::endl;
			std::cin >> c;
			if (c < 1 && c > 3)
				std::cout << "Incorrect Input" << std::endl;
		}
		std::cout << "" << std::endl;
		setClass(c);
		levelUp();
	}

	void Character::raceQuery() {
		int r = 0;
		while (r < 1 || r > 3) {
			std::cout << "Choose a Race" << std::endl;
			std::cout << "1) Dwarf" << std::endl;
			std::cout << "2) Elf" << std::endl;
			std::cout << "3) Human" << std::endl;
			std::cin >> r;
			if (r < 1 && r > 3)
				std::cout << "Incorrect Input" << std::endl;
		}
		std::cout << "" << std::endl;
		setRace(r);
	}
