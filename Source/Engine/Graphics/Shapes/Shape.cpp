
#include "Shape.h"

#include "Engine/assert.hpp"


namespace JFF
{
	Shape::Shape(sf::Shape& shape)
		: IRenderItem()
		, m_shape(shape)
	{

	}

	void Shape::SetFillColor(sf::Color const& color)
	{
		m_shape.setFillColor(color);
	}

	void Shape::SetOrigin(sf::Vector2f const& origin)
	{
		m_shape.setOrigin(origin);
	}

	void Shape::SetPosition(sf::Vector2f const& position)
	{
		m_shape.setPosition(position);
	}

	void Shape::LoadTexture(std::string const& textureName, bool adaptRect /*= true*/)
	{
		if (m_texture.loadFromFile("Data/" + textureName))
		{
			m_shape.setTexture(&m_texture, adaptRect);
		}
		else
		{
			throw_assertNotReached("Texture \"" + textureName + "\" could not be loaded.");
		}
	}

	void Shape::Render(sf::RenderWindow* window) const
	{
		window->draw(m_shape);
	}
}
