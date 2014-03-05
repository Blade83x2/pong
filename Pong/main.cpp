#include <SFML/Graphics.hpp>
#include "Game.h"

int main()
{
	Game Cyberpong;
	Cyberpong.Init();

	while (Cyberpong.isRunning())
	{
		Cyberpong.Run();
	}

	return 0;
}