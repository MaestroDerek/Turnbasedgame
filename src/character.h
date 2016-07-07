/*
 * character.h
 *
 *  Created on: Jul 6, 2016
 *      Author: gledford
 */

#ifndef CHARACTER_H_
#define CHARACTER_H_

class character
{
public:
	virtual ~character() {}

	virtual void power_up() = 0;

	virtual void attack() = 0;

	virtual void heal() = 0;
};

#endif /* CHARACTER_H_ */
