/*
 * Necromancer.h
 *
 *  Created on: Jul 8, 2016
 *      Author: Derekledford
 */

#ifndef SRC_NECROMANCER_H_
#define SRC_NECROMANCER_H_

#include "Character.h"

class Necromancer: public Character {
public:
	Necromancer(unsigned int health);
	virtual ~Necromancer();

	void power_up();

	void attack(Character &enemy);

	void heal();

	int get_current_health();

	void take_damage(unsigned int damage);

private:
	int current_health;

	unsigned int current_attack_power;

	unsigned int tomes [3];

	unsigned int counter;
};
#endif /* SRC_NECROMANCER_H_ */
