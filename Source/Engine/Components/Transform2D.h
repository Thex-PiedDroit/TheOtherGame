
#pragma once

#include "Engine/EventSystem/EventSystem.h"

#include <SFML/System.hpp>


namespace JFF
{
	class Transform2D
	{
	private:

		sf::Vector2f m_position;
		float m_rotation;


	public:

		const static EventType OnMove;
		const static EventType OnRotate;

		Event onMove;
		Event onRotate;


		Transform2D() = default;
		Transform2D(sf::Vector2f const& position, float rotation = 0.0f);


		inline sf::Vector2f const& GetPosition() const { return m_position; }
		inline float GetRotation() const { return m_rotation; }

		void SetPosition(sf::Vector2f const& position);
		void SetRotation(float rotation);
	};
}
