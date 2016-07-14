/*
 * Necromancer.cpp
 *
 *  Created on: Jul 8, 2016
 *      Author: Derekledford
 */

#include "Necromancer.h"
#include <iostream>

Necromancer::Necromancer(unsigned int health) : current_health(health), current_attack_power(1), counter(0) {
	tomes[0] = 1;
	tomes[1] = 2;
	tomes[2] = 3;
}

Necromancer::~Necromancer() {
}

void Necromancer::power_up() {
	current_attack_power+=tomes[counter];
	current_health-=1;
	if (counter == 2){
		current_health-=2;
	}
	std::cout << "The Necromancer uses a tome to power himself. \n" << std::endl;
	counter+=1;
	if (counter > 2){
		counter = 2;
	}

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
