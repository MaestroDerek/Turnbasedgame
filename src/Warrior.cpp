/*
 * Warrior.cpp
 *
 *  Created on: Jul 7, 2016
 *      Author: Derekledford
 */

#include "Warrior.h"

Warrior::Warrior(unsigned int health) : current_health(health), current_attack_power(2) {
}

Warrior::~Warrior() {
}

void Warrior::power_up() {
	current_attack_power+=1;
}

void Warrior::attack(Character &enemy) {
	enemy.take_damage(current_attack_power);
}

void Warrior::heal() {
	current_health+=1;
}

int Warrior::get_current_health() {
	return current_health;
}

void Warrior::take_damage(unsigned int damage) {
	current_health-= damage;
}
