#pragma once
#include <iostream>
#include <windows.h>
#include <windowsx.h>
using namespace std;

class Figure {
public:
	Figure(COLORREF _colorPen);
	virtual void show() = 0;
	virtual void hide() = 0;
	virtual void moveFigure() = 0;
	bool isIncideConsole(int x, int y);
	~Figure() { ReleaseDC(hwnd, hdc); }
protected:
	HWND hwnd;
	HDC hdc;
	RECT rt;
	COLORREF colorPen;
};