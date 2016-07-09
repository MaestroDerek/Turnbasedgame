/*
 * Warrior.h
 *
 *  Created on: Jul 7, 2016
 *      Author: Derekledford
 */

#ifndef TURNBASEDGAME_SRC_WARRIOR_H_
#define TURNBASEDGAME_SRC_WARRIOR_H_

#include "Character.h"

class Warrior: public Character {
public:
	Warrior(unsigned int health);

	virtual ~Warrior();

	void power_up();

	void attack();

	void heal();

	int get_current_health();

	void take_damage(unsigned int damage);

private:
	int current_health;

};

#endif /* WARRIOR_H_ */
