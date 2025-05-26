#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

class Figure {
public:
	Figure();
	Figure(int _x, int _y, int _a, COLORREF _colorPen);
	virtual void show() = 0;
	virtual void hide() = 0;
	virtual void moveFigure(int, int) = 0;
	virtual bool isInsideConsole() = 0;
	~Figure() { ReleaseDC(hwnd, hdc); }
protected:
	HWND hwnd;
	HDC hdc;
	RECT rt;
	COLORREF colorPen;
	int topLeft, topRight, x, y, a, h;
};