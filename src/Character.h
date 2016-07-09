/*
 * Character.h
 *
 *  Created on: Jul 6, 2016
 *      Author: gledford
 */

#ifndef CHARACTER_H_
#define CHARACTER_H_

class Character
{
public:
	virtual ~Character() {}

	virtual void power_up() = 0;

	virtual void attack(Character &enemy) = 0;

	virtual void heal() = 0;

	virtual int get_current_health() = 0;

	virtual void take_damage(unsigned int damage) = 0;
};

#endif /* CHARACTER_H_ */
