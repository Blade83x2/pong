#include "Game.h"

Game::Game()
{
	window.create(
		sf::VideoMode(1280, 720), 
		"CyberPong"
	);
}

void Game::Init()
{
	this->running = true;
}

void Game::Run()
{
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
				this->running = false;
			}
		}
		window.clear(sf::Color(0, 134, 194));
		window.display();
	}
}

bool Game::isRunning()
{
	return running;
}