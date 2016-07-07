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

	void attack();

	void heal();

	unsigned int get_current_health();

private:
	unsigned int current_health;

};

#endif /* PRIEST_H_ */
