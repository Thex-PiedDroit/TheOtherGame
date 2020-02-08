
#include "Cow.h"
#include "Engine/EventSystem/EventType.h"


void Cow::Update()
{
	m_transform.Translate(sf::Vector2f(UNIT * 0.033f, 0.0f));
}

void Cow::HandleEvent(JFF::EventType const& eventType, void* subject)
{
	if (eventType == JFF::Transform2D::OnMove)
	{
		m_sprite.SetPosition(m_transform.GetPosition());
	}
}
