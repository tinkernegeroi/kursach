#include <windows.h>
#include <windowsx.h>
#include <iostream>
#include "Figure.h"
#include "Triangle.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	system("color F0");
	COLORREF colorPen = RGB(0, 0, 0);
	Triangle* triangle = new Triangle(50, 50, 40, colorPen);
	triangle->show();
}

