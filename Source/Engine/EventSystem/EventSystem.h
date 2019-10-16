
#pragma once

#include "EventType.h"

#include <vector>


namespace JFF
{
	class IEventObserver
	{
		friend class Event;

	protected:

		virtual void ObservedEventUpdate(void* subject, EventType const& eventType) = 0;
	};


	// TODO: Remove unsafe void* and string
	class Event
	{
	public:

		void Invoke(void* subject, EventType const& eventType);

		inline void RegisterObserver(void* observer) { m_listeners.push_back(observer); }
		void UnregisterObserver(void* observer);
		inline void operator() (void* subject, EventType const& eventType) { Invoke(subject, eventType); }


	private:

		std::vector<IEventObserver*> m_listeners;
	};
}
