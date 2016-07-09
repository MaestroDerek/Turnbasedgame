/*
 * Necromancer.cpp
 *
 *  Created on: Jul 8, 2016
 *      Author: Derekledford
 */

#include "Necromancer.h"

Necromancer::Necromancer(unsigned int health) : current_health(health), current_attack_power(1) {
}

Necromancer::~Necromancer() {
}

void Necromancer::power_up() {
	current_attack_power+=2;
	current_health-=1;
}

void Necromancer::attack(Character& enemy) {
	enemy.take_damage(current_attack_power);
}

void Necromancer::heal() {
	current_health+=2;
}

int Necromancer::get_current_health() {
	return current_health;
}

void Necromancer::take_damage(unsigned int damage) {
	current_health-=damage;
}
