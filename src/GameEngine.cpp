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
#include "Warrior.h"

GameEngine::GameEngine() : player(0), bot(0) {
}

GameEngine::~GameEngine() {
	delete bot;
	bot = 0;

	delete player;
	player = 0;
}

void GameEngine::start_game() {
	bool is_player_turn = true;
	bot = new Priest(20);
	player = new Warrior(20);

	while(true) {
		if (bot->get_current_health() > 0 && player->get_current_health() > 0)
		{
			prompt_decision(is_player_turn);
			is_player_turn = !is_player_turn;
		}
		else
		{
			if (bot->get_current_health() <= 0)
			{
				std::cout << "You win!!" << std::endl;
			}
			else
			{
				std::cout << "You lose!!" << std::endl;
			}

			break;
		}
	}
}

void GameEngine::prompt_decision(bool is_player_turn) {
	unsigned int action = 0;

	if (is_player_turn) {
		std::cout << "Player HP: " << player->get_current_health() << std::endl;
		std::cout << "Enemy HP: " << bot->get_current_health() << std::endl;

		std::cout << "Choose your action" << std::endl;
		std::cout << "0 - Power Up" << std::endl;
		std::cout << "1 - Heal" << std::endl;
		std::cout << "2 - Attack" << std::endl;

		std::cin >> action;

		switch (action) {
		case 0:
			player->power_up();
			break;
		case 1:
			player->heal();
			break;
		case 2:
			player->attack(*bot);
			break;
		default:
			break;
		}
	} else {
		if (bot->get_current_health() > 10) {
			std::cout << "You were hit" << std::endl;
			bot->attack(*player);
		} else {
			std::cout << "Enemy healed" << std::endl;
			bot->heal();
		}
	}

}
