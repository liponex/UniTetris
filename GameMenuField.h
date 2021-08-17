#pragma once
#include "Actions.h"
#include "Canvas.h"
#include "GameMenuText.h"

class GameMenuField
{
public:
	explicit GameMenuField(int _textId = 0, unsigned int _rowId = 0);
	explicit GameMenuField(const GameMenuText& _text = GameMenuText(0, 0));
	void Drow(Canvas& _canvas, bool _isInFocus) const;
	void SetAction(const Actions& _action);
	Actions GetAction() const;

	void SetScreenId(const int& _screenId);
	int GetScreenId() const;
private:
	Actions action = Actions::MoveBack;
	int screenId = -1;
	int textId = -1;
	GameMenuText text;
	unsigned int rowId{};
};
