#include <iostream>
#include <string>
#include <windows.h>
#include <windowsx.h>
#include "Figure.h"
using namespace std;
Figure::Figure(COLORREF _colorPen) {
	hwnd = GetConsoleWindow();//�������� ������������� ����
	hdc = GetDC(hwnd); //�������� �������� �����������
	GetClientRect(hwnd, &rt);
	colorPen = _colorPen;
}
bool Figure::isIncideConsole(int x, int y){
	return 1;
}
