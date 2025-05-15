#include <windows.h>
#include <windowsx.h>
#include "Triangle.h"

bool Triangle::isInsideConsole() {
	return ((x - a / 2) < rt.left) || ((x + a / 2) > rt.right) || (y < rt.top);
}

void Triangle::show() {
	HPEN pen = CreatePen(PS_SOLID, 2, colorPen);
	SelectObject(hdc, pen);
	MoveToEx(hdc, x, y, NULL);
	//cout << x << " " << y << " " << h << " " << topLeft << " " << topRight << endl;
	LineTo(hdc, topLeft, y + h);
	LineTo(hdc, topRight, y + h);
	LineTo(hdc, x, y);
	DeleteObject(pen);

}

//void Triangle :: recalcPoints() {
//	
//}

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