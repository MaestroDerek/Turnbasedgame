/*
 * Warrior.cpp
 *
 *  Created on: Jul 7, 2016
 *      Author: Derekledford
 */

#include "Warrior.h"

Warrior::Warrior(unsigned int health) : current_health(health) {
}

Warrior::~Warrior() {
}

void Warrior::power_up() {
}

void Warrior::attack() {
}

void Warrior::heal() {
	current_health+=2;
}

unsigned int Warrior::get_current_health() {
	return current_health;
}

void Warrior::take_damage(unsigned int damage) {
	//TODO
}
