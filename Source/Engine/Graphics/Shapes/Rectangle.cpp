
#include "Rectangle.h"


namespace JFF
{
	Rectangle::Rectangle(sf::Vector2f const& size /*= sf::Vector2f(0.0f, 0.0f)*/)
		: Shape(m_rectangle)
		, m_rectangle(size)
	{

	}
}
