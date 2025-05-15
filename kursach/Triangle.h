#pragma once
#include "Figure.h"

class Triangle :public Figure
{
public:
	Triangle(int _x, int _y, int _a, COLORREF _colorPen) : Figure(_x, _y, _a, _colorPen) {
		topLeft = x - (a / 2);
		topRight = x + (a / 2);
	};
	void show() override;
	void hide() override;
	void moveFigure(int, int) override;
	bool isInsideConsole() override;
	int getX() { return x; };
	int getY() { return y; };
	int getH() { return h; };
	int getA() { return a; };
	void recalcPoints();



};