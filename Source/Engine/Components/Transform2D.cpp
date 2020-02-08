
#include "Transform2D.h"


namespace JFF
{
	const EventType Transform2D::OnMove(001);
	const EventType Transform2D::OnRotate(002);


	Transform2D::Transform2D()
		: m_position()
		, m_rotation()
		, m_onMove(OnMove)
		, m_onRotate(OnRotate)
	{

	}

	Transform2D::Transform2D(sf::Vector2f const& position, float rotation /*= 0.0f*/)
		: m_position(position)
		, m_rotation(rotation)
		, m_onMove(OnMove)
		, m_onRotate(OnRotate)
	{

	}

	void Transform2D::SetPosition(sf::Vector2f const& position)
	{
		m_position = position;

		m_onMove.Invoke(this);
	}

	void Transform2D::Translate(sf::Vector2f const& translation)
	{
		SetPosition(m_position + translation);
	}

	void Transform2D::SetRotation(float rotation)
	{
		m_rotation = rotation;

		m_onRotate.Invoke(this);
	}

	void Transform2D::Rotate(float rotation)
	{
		SetRotation(m_rotation + rotation);
	}
}
