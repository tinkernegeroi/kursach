#pragma once
#include "Triangle.h"

class ComplexFigure : public Figure {
public:
	ComplexFigure(Triangle* _t);
	void show() override;
	void moveFigure(int a, int b) override;
	void hide() override;
private:
	Triangle* t;
};
