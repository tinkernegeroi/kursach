#include <iostream>
#include <windows.h>
#include <string>
#include "Figure.h"
using namespace std;
Figure::Figure() : colorPen(RGB(240, 240, 240)) {
	hwnd = GetConsoleWindow();//получаем идентификатор окна
	hdc = GetDC(hwnd); //получаем контекст отображения
	GetClientRect(hwnd, &rt);
}
Figure::Figure(int _x, int _y, int _a, COLORREF _colorPen) {
	hwnd = GetConsoleWindow();//получаем идентификатор окна
	hdc = GetDC(hwnd); //получаем контекст отображения
	GetClientRect(hwnd, &rt);
	x = _x;
	y = _y;
	a = _a;
	h = (_a * sqrt(3) / 2);
	colorPen = _colorPen;
}

