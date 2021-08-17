#pragma once
#include "Canvas.h"
#include "Figure.h"

class GameField
{
public:
	GameField();
	void Resize(const int& _width, const int& _height);
	void Drow(Canvas& _canvas) const;
	void SetBlockType(int _x, int _y, BlockType _blockType) const;
	void Merge(Figure _figure);
	BlockType GetBlockType(int _x, int _y) const;
	bool HasCollision(Figure _figure) const;
	void Clear() const;
	unsigned int scoreContainer = 0;
private:
	int width = 10;
	int height = 20;
	BlockType** field{};
};
