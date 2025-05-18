#pragma once
#include <stack>
#include <vector>
#include <initializer_list>
#include "Figure.h"
class FiguresStack {
private:
	stack <Figure*, vector <Figure*>> figuresStack;
public:
	FiguresStack() {};
	FiguresStack(initializer_list <Figure*> list) {
		for (auto figure : list) {
			figuresStack.push(figure);
		}
	}
	void add(Figure* f);
	void show();
	void hide();
	void clear();
};
