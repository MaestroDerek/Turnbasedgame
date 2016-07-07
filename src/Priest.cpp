/*
 * Priest.cpp
 *
 *  Created on: Jul 6, 2016
 *      Author: gledford
 */

#include "Priest.h"

Priest::Priest(unsigned int health) : current_health(health) {
}

Priest::~Priest() {
}

void Priest::power_up() {
}

void Priest::attack() {
}

void Priest::heal() {
	current_health+=2;
}

unsigned int Priest::get_current_health() {
	return current_health;
}
