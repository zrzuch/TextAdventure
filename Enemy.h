#ifndef ENEMY_H
#define ENEMY_H

class Enemy {
public:
	Enemy(int newEnemy);
private:
	void generateStatistics();

	int dexterity;
	int endurance;
	int intelligence;
	int strength;

	int level;
	int health;

	int _class;
	int type;
};

#endif