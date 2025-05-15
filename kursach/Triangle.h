#pragma once
#include "Figure.h"

class Triangle :public Figure
{
public:
	Triangle(int _x, int _y, int _a, COLORREF _colorPen) : Figure(_x, _y, _a, _colorPen) {};
	void show() override;
	void hide() override;
	void moveFigure(int a, int b) override;
	bool isInsideConsole() override;
	void findTopPoints();
};