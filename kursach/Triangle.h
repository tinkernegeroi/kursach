#pragma once
#include "Figure.h"

class Triangle :public Figure
{
public:
	Triangle(int _x, int _y, double _a, COLORREF _colorPen) : Figure(_colorPen), x(_x), y(_y), a(_a), h((_a*sqrt(3))/2) {};
	void show() override;
	void hide() override;
	void moveFigure() override;
	void findTopPoints();
private:
	int x, y;
	double a, h;
	double topLeft, topRight;
};