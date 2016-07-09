/*
 * Priest.h
 *
 *  Created on: Jul 6, 2016
 *      Author: gledford
 */

#ifndef PRIEST_H_
#define PRIEST_H_

#include "Character.h"

class Priest: public Character {
public:
	Priest(unsigned int health);

	virtual ~Priest();

	void power_up();

	void attack(Character &enemy);

	void heal();

	int get_current_health();

	void take_damage(unsigned int damage);

private:
	int current_health;

	unsigned int current_attack_power;

};

#endif /* PRIEST_H_ */
