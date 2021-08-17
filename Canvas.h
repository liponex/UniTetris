#pragma once
#include <SFML/Graphics.hpp>
#include "BlockType.h"
#include "GameMenuText.h"

using namespace sf;

enum class WindowSize
{
	Small,
	Middle,
	Big
};

class Canvas
{
public:
	Canvas();

	void Render();
	void DrowBackground();
	void DrowFrame();
	void DrowGameField();
	void DrowGameOver();
	void DrowText(unsigned int _textId, unsigned int _rowId, bool _state = false);
	void DrowText(GameMenuText _text, bool _state = false);
	void DrowBlock(int _x, int _y, BlockType _blockType);
	void Clear();
	bool IsOpen() const;
	RenderWindow& GetWindow();
	void SetSize(WindowSize _size);
};
