
#pragma once

#include "Engine/Graphics/IRenderItem.h"
#include <SFML/Graphics.hpp>
#include <string>


namespace JFF
{
	/*abstract*/ class Shape : Graphics::IRenderItem
	{
	public:

		Shape(sf::Shape& shape);

		void SetFillColor(sf::Color const& color);
		void SetOrigin(sf::Vector2f const& origin);
		void SetPosition(sf::Vector2f const& position);

		void LoadTexture(std::string const& textureName, bool adaptRect = true);
		void SetTexture(std::shared_ptr<const sf::Texture> texture, bool adaptRect = true);

		void Render(sf::RenderWindow* window) const override final;


	protected:

		sf::Shape& m_shape;
		std::shared_ptr<const sf::Texture> m_texture;
	};
}
