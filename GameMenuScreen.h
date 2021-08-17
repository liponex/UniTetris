#pragma once
#include "Canvas.h"
#include "GameMenuField.h"

class GameMenuField;

class GameMenuScreen
{
public:
	void Drow(Canvas& _canvas);

	void MoveUp();
	void MoveDown();
	Actions Select();
	bool MoveBack();
	bool MoveForward();

	int AddChild();
	int AddField(GameMenuField _field);

	GameMenuScreen& GetChild(int _childId);
	GameMenuField& GetField(int _fieldId);
private:
	int selectedId = -1;
	int selectedFieldNum = 0;
	std::vector<GameMenuField> fields;
	std::vector<GameMenuScreen> children;
};
