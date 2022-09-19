#include "Main.hpp"


dPoint::dPoint(double x, double y)
	: x(x), y(y)
{
}

Graph::Graph(double cx, double cy, double sx, double sy)
	: center(cx, cy), scale(sx, sy)
{
}

Wnd::Wnd(int32 w, int32 h)
	: w(w), h(h)
{
}

int32 Wnd::r(void)
{
	return Min(this->w, this->h);
}


double gItoRx(int32 X) {
	return (X * 2.0 - wnd.w) / wnd.r() * graph.scale.x;
}
double gItoRy(int32 Y) {
	return (Y * 2.0 - wnd.h) / wnd.r() * graph.scale.y;
}
int32 gRtoIx(double x) {
	return int32(x * wnd.r() / graph.scale.x + wnd.w) / 2;
}
int32 gRtoIy(double y) {
	return int32(y * wnd.r() / graph.scale.y + wnd.h) / 2;
}

bool Graph::calc(double x, double y)
{
	return 1 > x * x + y * y + abs(x) * y;
}
