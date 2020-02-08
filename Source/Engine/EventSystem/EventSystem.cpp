
#include "EventSystem.h"


namespace JFF
{
	Event::Event(EventType const& eventType)
		: m_eventType(eventType)
	{

	}

	void Event::Invoke(void* subject)
	{
		for (auto& listener : m_listeners)
			listener->HandleEvent(m_eventType, subject);
	}

	void Event::UnregisterObserver(IEventObserver* observer)
	{
		auto const& iterator = std::find(m_listeners.begin(), m_listeners.end(), observer);

		m_listeners[iterator - m_listeners.begin()] = m_listeners.back();	// Copy the last in here
		m_listeners.pop_back();												// Then pop the last
	}
}
