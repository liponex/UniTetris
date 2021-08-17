#pragma once
#include <SFML/Graphics.hpp>

class Game
{
public:
	virtual ~Game() = default;
	virtual void Events(sf::RenderWindow& _window) = 0;
	virtual void Update(double _dt) = 0;
	virtual bool End() = 0;
	virtual void Run() = 0;
};
