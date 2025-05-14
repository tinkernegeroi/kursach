#include <windows.h>
#include <windowsx.h>
#include <math.h>
#include "Triangle.h"

void Triangle::findTopPoints() {
	topLeft = x - (a / 2);
	topRight = x + (a / 2);
}

void Triangle::show() {
	HPEN pen = CreatePen(PS_SOLID, 2, colorPen);
	SelectObject(hdc, pen);
	findTopPoints();
	LineTo(hdc, topLeft, y - h);
	LineTo(hdc, topRight, y - h);
	LineTo(hdc, x, y);
}
void Triangle::moveFigure() {
	return;
}

void Triangle::hide() {
	return;
}