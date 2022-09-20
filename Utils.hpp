#pragma once

#include <Siv3D.hpp>
#include "Complex.hpp"


class dPoint {
public:
	double x, y;
	dPoint()
		: x(0), y(0)
	{};
	dPoint(double x, double y);
};
class Graph {
public:
	dPoint center;
	dPoint scale;
	Graph()
		: center(), scale()
	{};
	Graph(double cx, double cy, double sx, double sy);
	bool calc(const Complex& z);
};
class Wnd {
public:
	int32 w, h;
	Wnd()
		: w(100), h(100)
	{};
	Wnd(int32, int32);
	int32 r(void);
};



double gItoRx(int32);
double gItoRy(int32);
int32 gRtoIx(double);
int32 gRtoIy(double);
