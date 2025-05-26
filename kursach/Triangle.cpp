#include <windows.h>
#include <string>
#include "Triangle.h"


void Triangle::recalcPoints() {
	topLeft = x - (a / 2);
	topRight = x + (a / 2);
}


bool Triangle::isInsideConsole() {
	return (x - a / 2 >= rt.left) && (x + a / 2 <= rt.right) && (y >= rt.top) && (y + h <= rt.bottom);
}

void Triangle::show() {
	if (isInsideConsole()) {
		HPEN pen = CreatePen(PS_SOLID, 2, colorPen);
		SelectObject(hdc, pen);
		recalcPoints();
		MoveToEx(hdc, x, y, NULL);
		LineTo(hdc, topLeft, y + h);
		LineTo(hdc, topRight, y + h);
		LineTo(hdc, x, y);
		DeleteObject(pen);
	}
	else {
		throw FigureException(FigureException::OUTOFBOUNDS, x, y, a);
	}
}


void Triangle::moveFigure(int a, int b) {
	if (a < 0 || b < 0) {
		throw FigureException(FigureException::NEGATIVEINPUT, a, b, this->a);
	}
	hide();
	x = a;
	y = b;
	show();
}

void Triangle::hide() {
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(240,240,240));
	SelectObject(hdc, pen);
	MoveToEx(hdc, x, y, NULL);
	LineTo(hdc, topLeft, y + h);
	LineTo(hdc, topRight, y + h);
	LineTo(hdc, x, y);
	DeleteObject(pen);
}

Triangle::FigureException::FigureException(ErrorType type, int x, int y, int a) {
	if (type == NEGATIVEINPUT) {
		message = "Неккоректные данные. Вершина: " + to_string(x) + ", " + to_string(y) + ". Длина стороны: " + to_string(a);
	}
	else if (type == OUTOFBOUNDS) {
		message = "Выход за границы. Вершина: " + to_string(x) + ", " + to_string(y) + ". Длина стороны: " + to_string(a);
	}
}
const char* Triangle::FigureException::what() const noexcept {
	return message.c_str();
}