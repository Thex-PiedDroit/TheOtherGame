
#include "gameMain.h"
#include "Gameplay/Entities/Animals/Cow.h"

#include <SFML/System.hpp>


Cow cow(sf::Vector2f(50.0f, 100.0f));

void Initialize()
{
	cow.LoadTexture();
}

void Update()
{
	cow.Update();
}
