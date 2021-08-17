#pragma once
#include <chrono>
#include <SFML/Graphics.hpp>
#include "Game.h"
#include "GameField.h"
#include "GameMenuScreen.h"
#include "Canvas.h"
#include "Figure.h"
#include "Stages.h"

class Tetris : virtual public Game
{
	using clock = std::chrono::system_clock;
	using time = std::chrono::time_point<clock>;

public:
	Tetris();

	void LoadScores();
	void SaveScores();

	void Events(RenderWindow& _window) override;
	void Update(double _dt) override;
	void UpdateMenu();
	bool End() override;
	void Run() override;
private:
	GameMenuScreen menu = GameMenuScreen();
	GameField gameField;
	Canvas canvas;
	Figure figure;
	Stages stage = Stages::Menu;
	unsigned int topScores[5] = {0};
};
