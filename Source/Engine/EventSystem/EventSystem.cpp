
#include "EventSystem.h"


namespace JFF
{
	void Event::Invoke(void* subject, EventType const& eventType)
	{
		for (auto& listener : m_listeners)
			listener->ObservedEventUpdate(subject, eventType);
	}

	void Event::UnregisterObserver(void* observer)
	{
		auto const& iterator = std::find(m_listeners.begin(), m_listeners.end(), observer);

		m_listeners[iterator - m_listeners.begin()] = m_listeners.back();	// Copy the last in here
		m_listeners.pop_back();												// Then pop the last
	}
}
