
#pragma once

#include "EventType.h"

#include <vector>


namespace JFF
{
	class IEventObserver
	{
		friend class Event;

	protected:

		virtual void HandleEvent(EventType const& eventType, void* subject) = 0;
	};


	// TODO: Remove unsafe void*
	class Event
	{
	public:

		Event() = delete;
		Event(EventType const& eventType);

		void Invoke(void* subject);

		inline void RegisterObserver(IEventObserver* observer) { m_listeners.push_back(observer); }
		void UnregisterObserver(IEventObserver* observer);
		inline void operator() (void* subject) { Invoke(subject); }


	private:

		std::vector<IEventObserver*> m_listeners;
		const EventType m_eventType;
	};
}
