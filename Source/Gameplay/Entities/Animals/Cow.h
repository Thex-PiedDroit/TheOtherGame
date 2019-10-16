
#pragma once

#include "Engine/Components/Transform2D.h"
#include "Engine/Graphics/Shapes/Rectangle.h"
#include "Gameplay/gameConstants.h"
#include <SFML/System.hpp>


class Cow
{
public:

	Cow() = default;

	Cow(sf::Vector2f const& position)
		: m_transform(position)
		, m_sprite(TILE_SIZE)
	{
		m_sprite.SetOrigin(sf::Vector2f(TILE_SIZE.x * 0.5f, TILE_SIZE.y));
		m_sprite.SetPosition(position);
	}

	inline void LoadTexture()
	{
		m_sprite.LoadTexture("Cow.png");
	}


private:

	JFF::Transform2D m_transform;
	JFF::Rectangle m_sprite;
};
