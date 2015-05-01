#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
	
public:
	Character();

	void levelUp();
	void classQuery();
	void raceQuery();

	int getClass();
	int getRace();
	int getDexterity();
	int getEndurance();
	int getIntelligence();
	int getStrength();

	void print();

private:
	int _class;
	int race;
	
	int dexterity;
	int endurance;
	int intelligence;
	int strength;

	int level;
	int health;

	void setClass(int newClass);
	void setRace(int newRace);
	void setDexterity();
	void setEndurance();
	void setIntelligence();
	void setStrength();

	void calculateStats();
	bool isEmpty();
	void reset();
};

#endif