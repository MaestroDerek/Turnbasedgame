/*
 * Priest.cpp
 *
 *  Created on: Jul 6, 2016
 *      Author: gledford
 */

#include "Priest.h"

Priest::Priest(unsigned int health) : current_health(health), current_attack_power(1) {
}

Priest::~Priest() {
}

void Priest::power_up() {
	current_attack_power+=1;
}

void Priest::attack(Character &enemy) {
	enemy.take_damage(current_attack_power);
}

void Priest::heal() {
	current_health+=2;
}

int Priest::get_current_health() {
	return current_health;
}

void Priest::take_damage(unsigned int damage) {
	current_health-=damage;
}
