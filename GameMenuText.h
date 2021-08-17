#pragma once
#include <string>

class GameMenuText
{
private:
	unsigned int textSize = 0;
public:
	explicit GameMenuText(int _num = 0, unsigned int _rowId = 0);
	explicit GameMenuText(const std::string& _text, unsigned int _rowId = 0);

	unsigned int Size() const;

	std::string text = {};
	unsigned int rowId = 0;
};
