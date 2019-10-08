
#include "Engine/Graphics/Shapes/Shape.h"
#include "Engine/asserts.hpp"


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

	void Shape::LoadTexture(std::string const& textureName, bool adaptRect /*= true*/)
	{
		sf::Texture texture;

		if (texture.loadFromFile("Data/" + textureName))
		{
			SetTexture(std::make_shared<const sf::Texture>(texture), adaptRect);
		}
		else
		{
			AssertNotReached("Texture \"" + textureName + "\" could not be loaded.");
		}
	}

	void Shape::SetTexture(std::shared_ptr<const sf::Texture> texture, bool adaptRect /*= false*/)
	{
		m_texture = texture;
		m_shape.setTexture(m_texture.get(), adaptRect);
	}

	void Shape::Render(sf::RenderWindow* window) const
	{
		window->draw(m_shape);
	}
}}