#pragma once
#include <vector>
#include "Canvas.h"

struct Point
{
	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
	{
	}

	int x;
	int y;
};

class Figure
{
public:
	Figure(Point _position);

	void Update(double _dt);
	void Draw(Canvas& _canvas);

	void Rotate();
	void MoveR();
	void MoveL();
	void MoveD();
	void RandBody();

	void Backup();
	void Restore();

	std::vector<Point> GetBody();
	BlockType GetBlockType() const;
	Point GetPosition() const;
private:
	Point position;
	Point positionBackup;

	double timeForUpdate = 500;
	double timeFromLastUpdate = 0;
	std::vector<std::vector<Point>> body;
	BlockType blockType;
	unsigned int currentRotate = 0;
	unsigned int rotateBackup = currentRotate;
};
