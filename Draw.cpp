#include "Draw.hpp"

void Draw(void)
{
	Complex z;
	for (auto Y : step(wnd.h)) {
		z.im = gItoRy(Y);
		for (auto X : step(wnd.w)) {
			z.re = gItoRx(X);
			if(graph.calc(z)) {
				image[Y][X] = HSV((X + Y) / 3.0, 1, 1);
			}
		}
	}
}
