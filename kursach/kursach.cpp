#include <windows.h>
#include <windowsx.h>
#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "ComplexFigure.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	system("color F0");
	try {
		COLORREF colorPen = RGB(0, 0, 0);
		Triangle* triangle1 = new Triangle(500, 200, 100, colorPen);
		Triangle* triangle2 = new Triangle(static_cast<int>(triangle1->getX()) - static_cast<int>(triangle1->getA() / 2), static_cast<int>(triangle1->getY()) + static_cast<int>(triangle1->getH()), static_cast<int>(triangle1->getA()), colorPen);
		Triangle* triangle3 = new Triangle(static_cast<int>(triangle1->getX()) + static_cast<int>(triangle1->getA() / 2), static_cast<int>(triangle1->getY()) + static_cast<int>(triangle1->getH()), static_cast<int>(triangle1->getA()), colorPen);
		ComplexFigure* comp = new ComplexFigure(triangle1, triangle2, triangle3, colorPen);
		comp->show();
		Sleep(1500);
		comp->moveFigure(500, 300);
	}
	catch (string m) {
		cout << m << endl;
	}
	
	//comp->hide();

}

