#include <Windows.h>
#include "FiguresStack.h"

void FiguresStack::add(Figure* f) {
	figuresStack.push(f);
}

void FiguresStack::show() {
	stack <Figure*, vector<Figure*>> temp = figuresStack;
	while (!(temp.empty())) {
		temp.top()->show();
		Sleep(600);
		temp.pop();
	}
}

void FiguresStack::hide() {
	stack <Figure*, vector<Figure*>> temp = figuresStack;
	while (!(temp.empty())) {
		temp.top()->hide();
		Sleep(600);
		temp.pop();
	}
}

void FiguresStack::clear() {
	while (!(figuresStack.empty())) {
		figuresStack.pop();
	}
}