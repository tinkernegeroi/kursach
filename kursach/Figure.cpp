#include <iostream>
#include <string>
#include <windows.h>
#include <windowsx.h>
#include "Figure.h"
using namespace std;
Figure::Figure(COLORREF _colorPen) {
	hwnd = GetConsoleWindow();//получаем идентификатор окна
	hdc = GetDC(hwnd); //получаем контекст отображения
	GetClientRect(hwnd, &rt);
	colorPen = _colorPen;
}
bool Figure::isIncideConsole(int x, int y){
	return 1;
}
