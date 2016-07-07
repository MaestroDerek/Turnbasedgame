/*
 * GameEngine.cpp
 *
 *  Created on: Jul 6, 2016
 *      Author: gledford
 */

#include <iostream>
#include "GameEngine.h"
#include "Character.h"
#include "Priest.h"

GameEngine::GameEngine() : player(0), bot(0) {
}

GameEngine::~GameEngine() {
	delete bot;
	bot = 0;

	delete player;
	player = 0;
}

void GameEngine::start_game() {
	std::cout << "Choose your character (default = Priest)" << std::endl;

	bot = new Priest(20);
	player = new Priest(20);

	while(bot->get_current_health() != 0 || player->get_current_health() != 0) {
		prompt_decision();
	}
}

void GameEngine::prompt_decision() {
	unsigned int action = 0;

	std::cout << "Player HP: " << player->get_current_health() << std::endl;
	std::cout << "Enemy HP: " << bot->get_current_health() << std::endl;

	std::cout << "Choose your action" << std::endl;
	std::cout << "0 - Power Up" << std::endl;
	std::cout << "1 - Heal" << std::endl;
	std::cout << "2 - Attack" << std::endl;

	std::cin >> action;

	switch(action) {
	case 0:
		player->power_up();
		break;
	case 1:
		player->heal();
		break;
	case 2:
		player->attack();
		break;
	default:
		break;
	}

}
