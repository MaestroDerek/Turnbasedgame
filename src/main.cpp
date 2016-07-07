/*
 * main.cpp
 *
 *  Created on: Jul 6, 2016
 *      Author: gledford
 */

#include <iostream>
#include "GameEngine.h"

int main()
{
  std::cout << "Begin Game" << std::endl;

  GameEngine game_engine;
  game_engine.start_game();

  std::cout << "End Game" << std::endl;

  return 0;
}


