/*
 * Warrior.h
 *
 *  Created on: Jul 7, 2016
 *      Author: Derekledford
 */

#ifndef TURNBASEDGAME_SRC_WARRIOR_H_
#define TURNBASEDGAME_SRC_WARRIOR_H_

class Priest: public Character {
public:
	Priest(unsigned int health);

	virtual ~Warrior();

	void power_up();

	void attack();

	void heal();

	unsigned int get_current_health();

private:
	unsigned int current_health;

};

#endif /* WARRIOR_H_ */
