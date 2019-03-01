#pragma once
#include "player.h"
#include <string>

using namespace std;
class GameSystem
{


public:
	GameSystem(string levelFileName);

	void playGame();
	
private:
	level _level;
	PLayer _player;
};