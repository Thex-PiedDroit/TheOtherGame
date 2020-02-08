#include "EventType.h"


bool JFF::EventType::operator==(EventType const& other) const
{
	return m_value == other.m_value;
}

bool JFF::EventType::operator!=(EventType const& other) const
{
	return m_value != other.m_value;
}
