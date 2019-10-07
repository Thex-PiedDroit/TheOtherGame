
#pragma once

#include "Engine/Graphics/IRenderItem.h"
#include <SFML/Graphics.hpp>


namespace JFF { namespace Graphics
{
	/*abstract*/ class Shape : IRenderItem
	{
	public:

		Shape(sf::Shape& shape);

		void SetFillColor(sf::Color const& color);
		void SetOrigin(sf::Vector2f const& origin);
		void SetPosition(sf::Vector2f const& position);

		void SetTexture(sf::Texture const* texture, bool adaptRect = false);

		void Render(sf::RenderWindow* window) const override final;


	protected:

		sf::Shape& m_shape;
	};
}}
