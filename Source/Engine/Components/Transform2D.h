
#pragma once

#include "Engine/EventSystem/EventSystem.h"

#include <SFML/System.hpp>


namespace JFF
{
	class Transform2D
	{
	public:

		const static EventType OnMove;
		const static EventType OnRotate;

		Event m_onMove;
		Event m_onRotate;


		Transform2D();
		Transform2D(sf::Vector2f const& position, float rotation = 0.0f);


		inline sf::Vector2f const& GetPosition() const { return m_position; }
		inline float GetRotation() const { return m_rotation; }

		void SetPosition(sf::Vector2f const& position);
		void Translate(sf::Vector2f const& translation);
		void SetRotation(float rotation);
		void Rotate(float rotation);


	private:

		sf::Vector2f m_position;
		float m_rotation;
	};
}
