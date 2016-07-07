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
	Priest();

	virtual ~Priest();

	void power_up();

	void attack();

	void heal();
};

#endif /* PRIEST_H_ */
