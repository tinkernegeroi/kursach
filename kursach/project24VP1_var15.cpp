#include <windows.h>
#include <windowsx.h>
#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "ComplexFigure.h"
#include "FiguresStack.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	system("color F0");
	try {
		SetConsoleTitle((LPCWSTR)L"24VP1_15");
		COLORREF colorPen = RGB(0, 0, 0);
		Triangle* triangle1 = new Triangle(300, -100, 100, colorPen);
		Triangle* triangle2 = new Triangle(static_cast<int>(triangle1->getX()) - static_cast<int>(triangle1->getA() / 2), static_cast<int>(triangle1->getY()) + static_cast<int>(triangle1->getH()), static_cast<int>(triangle1->getA()), colorPen);
		Triangle* triangle3 = new Triangle(static_cast<int>(triangle1->getX()) + static_cast<int>(triangle1->getA() / 2), static_cast<int>(triangle1->getY()) + static_cast<int>(triangle1->getH()), static_cast<int>(triangle1->getA()), colorPen);
		ComplexFigure* comp = new ComplexFigure(triangle1, triangle2, triangle3, colorPen);
		Triangle* tr = new Triangle(200, 200, 100, RGB(255, 0, 0));
		FiguresStack stack{ comp, tr };
		stack.show();
		Sleep(2000);
		comp->moveFigure(600, 180);
		Sleep(1000);
		tr->moveFigure(400, 100);
		Sleep(1000);
		stack.hide();
	}
	//try {
	//	SetConsoleTitle((LPCWSTR)L"24VP1_15");
	//	COLORREF colorPen = RGB(0, 0, 0);
	//	COLORREF colorPen2 = RGB(0, 255, 0);

	//	Triangle* triangle1 = new Triangle(50, 50, 100, colorPen);
	//	Triangle* triangle2 = new Triangle(500, 300, 100, colorPen2);

	//	triangle1->show();
	//	triangle2->show();
	//	Sleep(5000);
	//	triangle1->moveFigure(500, -500);
	//}
	catch (const Triangle ::FigureException& e) {
		cout << e.what() << endl;
	}
	

}

