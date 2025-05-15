#include <windows.h>
#include "ComplexFigure.h"
ComplexFigure::ComplexFigure(Triangle* _t) : t(_t) {};

void ComplexFigure::show() {
	t->show();
	Triangle* t1(topLeft, topRight, 
}