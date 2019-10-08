
#pragma once

#include "Shape.h"
#include <SFML/Graphics.hpp>


namespace JFF
{
	class Rectangle : public Shape
	{
	private:

		sf::RectangleShape m_rectangle;


	public:

		Rectangle(sf::Vector2f const& size = sf::Vector2f(0.0f, 0.0f));
	};
}

