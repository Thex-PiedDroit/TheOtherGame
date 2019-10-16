
#pragma once

#include "Shape.h"

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>


namespace JFF
{
	class Rectangle : public Shape
	{
	public:

		Rectangle(float sizeX, float sizeY);
		Rectangle(sf::Vector2f const& size = sf::Vector2f(0.0f, 0.0f));


	private:

		sf::RectangleShape m_rectangle;
	};
}

