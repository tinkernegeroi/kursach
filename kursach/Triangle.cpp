#include <windows.h>
#include <windowsx.h>
#include "Triangle.h"

void Triangle::recalcPoints() {
	topLeft = x - (a / 2);
	topRight = x + (a / 2);
}


bool Triangle::isInsideConsole() {
	return (x - a / 2 >= rt.left) && (x + a / 2 <= rt.right) && (y >= rt.top) && (y + h <= rt.bottom);
}

void Triangle::show() {
	HPEN pen = CreatePen(PS_SOLID, 2, colorPen);
	SelectObject(hdc, pen);
	recalcPoints();
	MoveToEx(hdc, x, y, NULL);
	LineTo(hdc, topLeft, y + h);
	LineTo(hdc, topRight, y + h);
	LineTo(hdc, x, y);
	DeleteObject(pen);

}


void Triangle::moveFigure(int a, int b) {
	hide();
	x = a;
	y = b;
	show();
}

void Triangle::hide() {
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(240,240,240));
	SelectObject(hdc, pen);
	MoveToEx(hdc, x, y, NULL);
	//recalcPoints();
	LineTo(hdc, topLeft, y + h);
	LineTo(hdc, topRight, y + h);
	LineTo(hdc, x, y);
	DeleteObject(pen);
}