
#include "Transform2D.h"


namespace JFF
{
	const EventType Transform2D::OnMove = EventType(1);
	const EventType Transform2D::OnRotate = EventType(2);


	Transform2D::Transform2D(sf::Vector2f const& position, float rotation /*= 0.0f*/)
		: m_position(position)
		, m_rotation(rotation)
	{

	}

	void Transform2D::SetPosition(sf::Vector2f const& position)
	{
		m_position = position;

		onMove.Invoke(this, OnMove);
	}

	void Transform2D::SetRotation(float rotation)
	{
		m_rotation = rotation;

		onRotate.Invoke(this, OnRotate);
	}
}
