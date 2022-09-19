#include "Update.hpp"

void Update(void)
{
	const double wheel = Mouse::Wheel();
	const bool clicked = MouseL.down();

	if (wheel || clicked || (Scene::FrameCount() == 1)) {
		//Print << wheel;
	}
}
