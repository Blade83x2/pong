#ifndef GAME_HPP
	#define GAME_HPP

	#include <iostream>
	#include <SFML/Graphics.hpp>

	class Game
	{
	public:
		Game();

		void Run();
		void Init();
		bool isRunning();

		bool running;
		sf::RenderWindow window;
	};

#endif