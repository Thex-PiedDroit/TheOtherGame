
#pragma once

#include "Shape.h"
#include <SFML/Graphics.hpp>


namespace JFF
{
	class Circle : public Shape
	{
	public:

		Circle(float radius = 0.0f);


	private:

		sf::CircleShape m_circle;
	};
}
