#pragma once
#include "Triangle.h"

class ComplexFigure : public Figure {
public:
	ComplexFigure(Triangle* _t1, Triangle* _t2, Triangle* _t3, COLORREF _colorPen);
	void show() override;
	void moveFigure(int, int) override;
	void hide() override;
	bool isInsideConsole() override;
private:
	Triangle* t1;
	Triangle* t2;
	Triangle* t3;
};

