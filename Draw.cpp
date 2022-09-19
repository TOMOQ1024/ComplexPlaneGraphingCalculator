#include "Draw.hpp"

void Draw(void)
{
	for (auto Y : step(wnd.h)) {
		const double y = gItoRy(Y);
		for (auto X : step(wnd.w)) {
			const double x = gItoRx(X);
			if(graph.calc(x, y)) {
				image[Y][X] = HSV((X + Y) / 3.0, 1, 1);
			}
		}
	}
}
