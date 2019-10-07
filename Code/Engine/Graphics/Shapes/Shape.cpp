
#include "Engine/Graphics/Shapes/Shape.h"


namespace JFF { namespace Graphics
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

	void Shape::SetTexture(sf::Texture const* texture, bool adaptRect /*= false*/)
	{
		m_shape.setTexture(texture, adaptRect);
	}

	void Shape::Render(sf::RenderWindow* window) const
	{
		window->draw(m_shape);
	}
}}