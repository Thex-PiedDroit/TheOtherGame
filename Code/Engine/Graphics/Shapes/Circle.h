
#pragma once

#include "Engine/Graphics/Shapes/Shape.h"
#include <SFML/Graphics.hpp>


namespace JFF { namespace Graphics
{
	class Circle : public Shape
	{
	public:

		Circle(float radius = 0.0f);


	private:

		sf::CircleShape m_circle;
	};
}}
