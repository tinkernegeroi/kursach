#include <windows.h>
#include <windowsx.h>
#include "Triangle.h"

void Triangle::findTopPoints() {
	topLeft = x - (a / 2);
	topRight = x + (a / 2);
}

bool Triangle::isInsideConsole() {
	return ((x - a / 2) < rt.left) || ((x + a / 2) > rt.right) || (y < rt.top);
}

void Triangle::show() {
	HPEN pen = CreatePen(PS_SOLID, 2, colorPen);
	SelectObject(hdc, pen);
	findTopPoints();
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
	findTopPoints();
	MoveToEx(hdc, x, y, NULL);
	LineTo(hdc, topLeft, y + h);
	LineTo(hdc, topRight, y + h);
	LineTo(hdc, x, y);
	DeleteObject(pen);
}