/*
 * GameEngine.h
 *
 *  Created on: Jul 6, 2016
 *      Author: gledford
 */

#ifndef GAMEENGINE_H_
#define GAMEENGINE_H_

class Character;

class GameEngine {
public:
	GameEngine();

	virtual ~GameEngine();

	void start_game();

private:

	void prompt_decision(bool is_player_turn);

	Character *player;
	Character *bot;
};

#endif /* GAMEENGINE_H_ */
