#include <windows.h>
#include "ComplexFigure.h"
ComplexFigure::ComplexFigure(Triangle* _t1, Triangle* _t2, Triangle* _t3, COLORREF _colorPen) : t1(_t1), t2(_t2), t3(_t3) {
	x = t1->getX();
	y = t1->getY();
	h = t1->getH();
	a = t1->getA();
	colorPen = _colorPen;
}

void ComplexFigure::show() {
	t1->show();
	t2->show();
	t3->show();
}
bool ComplexFigure::isInsideConsole() {
	return t1->isInsideConsole() && t2->isInsideConsole() && t3->isInsideConsole();
}

void ComplexFigure::hide() {
	t1->hide();
	t2->hide();
	t3->hide();
}

void ComplexFigure::moveFigure(int x1, int y1) {
	t1->moveFigure(x1, y1);
	/*t2->moveFigure(x1 - a / 2, y1 + h);
	t3->moveFigure(x1 + a / 2, y1 + h);*/
}